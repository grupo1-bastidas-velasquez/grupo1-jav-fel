print("Ingresar el nombre de una persona:")
Name = str(input(""))

print("Ingresar el número de la opción deseada:")
Op = int(input(""))

if (Op != 1) & (Op != 2):
    print(f"Ingrese la opción 1 o 2\n")
    Op = int(input(""))

if Op == 1:
    print(f"El nombre ingresado es {Name}")

if Op == 2:
    N = 1000*(Name + " ")
    print(N)
