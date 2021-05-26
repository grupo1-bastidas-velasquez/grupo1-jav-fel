print("Ingresar la edad de una persona:")
Edad1 = int(input(""))

print("Ingresar la edad de otra persona:")
Edad2 = int(input(""))

if Edad1 < Edad2:
    print(f"La persona de {Edad1} es la más joven")

if Edad2 < Edad1:
    print(f"La persona de {Edad2} es la más joven")

if Edad1 == Edad2:
    print(f"Ambas personas tienen la misma edad")
