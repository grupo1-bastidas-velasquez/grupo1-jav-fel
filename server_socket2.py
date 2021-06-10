
import socket
import threading

HEADER = 64
PORT = 3074
SERVER = '192.168.18.58'
ADDR = (SERVER, PORT)
FORMAT = 'utf-8'
DISCONNECT_MESSAGE = 'DISCONNECT!'
server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
Mac = '00:11:22:33:44:55'
server.bind(ADDR)

def handle_client(conn, addr):
	print(f"[NEW CONNECTION] {addr} connected.")
	connected = False
	msg_length = conn.recv(HEADER).decode(FORMAT)
	if msg_length:
		msg_length = int(msg_length)
		msg = conn.recv(msg_length).decode(FORMAT)
		print(f"[VERIFY MAC] {msg}.")
		if msg == Mac:
			connected = True
			print(f"[VERIFY MAC ADDRESS] MAC: '{msg}', allowed.")
			conn.send("Access allowed...".encode(FORMAT))
		else:
			print("[VERIFY MAC ADDRESS] Access denied...")
			print("[VERIFY MAC ADDRESS] UNKNOW ADDRESS")
			conn.send("Access denied, invalid MAC...".encode(FORMAT))
			conn.send("Connection closed...".encode(FORMAT))
		while connected:
			msg_length = conn.recv(HEADER).decode(FORMAT)
			if msg_length:
				msg_length = int(msg_length)
				msg = conn.recv(msg_length).decode(FORMAT)
				if msg == DISCONNECT_MESSAGE:
					connected = False
			print(f"[{addr}] {msg}")
			conn.send("Msg received".encode(FORMAT))

def start():
    server.listen()
    print(f"[LISTEN] Server is listening on address {ADDR}")
    while True:
        conn, addr = server.accept()
        thread = threading.Thread(target=handle_client, args=(conn, addr))
        thread.start()
        print(f"[ACTIVE CONNECTIONS] {threading.activeCount() - 1}")

print("[STARTING] server is running.....")
start()

