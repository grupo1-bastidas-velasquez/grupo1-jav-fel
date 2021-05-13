try:
    varA=int(input("Ingrese varA "))
    varB=int(input("Ingrese varB "))
    if varA < varB:
        print('más pequeño')
    elif varB < varA:
        print('más grande')
    elif varA==varB:
        print('igual')
except:
    print("string involucrado")