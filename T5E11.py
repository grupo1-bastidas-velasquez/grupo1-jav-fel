sum =0
try:
    fin=input("Escriba el número final ")
    final=int(fin)+1
    print('1', end='')
    for i in range(2, final):
        print('+',str(i),end='')
    for n in range(1, final):
        sum += n
    print('=',sum)
except:
    print("Escriba un número entero")