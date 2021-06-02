import threading
import time
def function():
	print("hola")
	time.sleep(1)
	print("Listo")

x=threading.Thread(target=function)
x.start()
print(threading.activeCount())