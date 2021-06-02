import threading
import time

ls=[]

def contador(n):
	for i in range(1,n+1):
		ls.append(i)
		time.sleep(0.5)
def contador2(n):
	for i in range(1,n+1):
		ls.append(i)
		time.sleep(0.5)

x=threading.Thread(target=contador, args=(5,))
x.start()
x.join()

y=threading.Thread(target=contador2, args=(5,))
y.start()


y.join()
#print(threading.activeCount())
print(ls)