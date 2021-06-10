import socket

HEADER = 64
PORT = 3074
SERVER = '192.168.18.58'
ADDR = (SERVER, PORT)
FORMAT = 'utf-8'
DISCONNECT_MESSAGE= 'DISCONNECT!'

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(ADDR)
#from getmac import get_mac_address as gma
#Mac=gma
Mac='00:11:22:33:44:55'

def send(msg):
	message = msg.encode(FORMAT)
	msg_length = len(message)
	send_length = str(msg_length).encode(FORMAT)
	send_length += b' '*(HEADER - len(send_length))
	client.send(send_length)
	client.send(message)
	print(client.recv(2048).decode(FORMAT))
	#if client.recv(2048).decode(FORMAT) =="Access denied, invalid MAC...":
	#	send(DISCONNECT_MESSAGE)
send(Mac)
input()
input('Envio de datos')
input()
input('Envio de más datos')
input()
send(DISCONNECT_MESSAGE)