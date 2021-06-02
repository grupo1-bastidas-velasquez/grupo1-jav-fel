import threading
import time

def function():
	print("Hola")
	time.sleep(1)
	print("Listo")
	time.sleep(0.85)
	print("Asdf")

x=threading.Thread(target=function)
x.start()
print(threading.activeCount())
time.sleep(1.4)
print("Termino")