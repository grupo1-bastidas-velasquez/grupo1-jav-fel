import threading
import time

ls=[]

def contador(n):
	for i in range(1,n+1):
		ls.append(i)
		print(i)
		time.sleep(0.01)
def contador2(n):
	for i in range(1,n+1):
		ls.append(i)
		print(i)
		time.sleep(0.02)

x=threading.Thread(target=contador, args=(10,))
x.start()

y=threading.Thread(target=contador2, args=(10,))
y.start()

#print(threading.activeCount())
print(ls)