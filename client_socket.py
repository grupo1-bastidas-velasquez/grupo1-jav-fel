import socket

HEADER = 64
PORT=''
SERVER= '190.102.239.161'
ADDR=(SERVER, PORT)
FORMAT='utf-8'
DISCONNECT_MESSAGE="DISCONNECT!"

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(ADDR)

de send(msg):
	message = msg.encode(FORMAT)
	msg_lenth = len(message)
	send_length = str(msg_lenth).encode(FORMAT)

	send_length += b' '*(HEADER-len(send_length))

	client.send(send_length)
	client.send(message)
	print(client.recv(2048).decode(FORMAT))

	send('hello')
	input('asdfasdf')
	input()
	send(DISCONNECT_MESSAGE)