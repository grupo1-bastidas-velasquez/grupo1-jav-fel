print("Ingresar un número entero:")
N1 = int(input(""))
n = N1*N1

print("Ingresar un segundo número entero:")
N2 = int(input(""))

if n == N2:
    print(f"El segundo número es igual al cuadrado del primero")

if n > N2:
    print(f"El segundo número es menor que el cuadrado del primero")

if n < N2:
    print(f"El segundo número es mayor que el cuadrado del primero")

