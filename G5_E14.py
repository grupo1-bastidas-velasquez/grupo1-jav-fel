#%%
class Cargo:
    def __init__(self, puesto, sueldo, an):
        self.puesto = puesto
        self.sueldo = sueldo
        self.an = an
    def getsueldo(self):
        return self.sueldo

    def getan(self):
        return self.an

    def descripcion(self):
        print(self.puesto + " tiene un sueldo de " +
              str(self.sueldo) + " millones por " +
              str(self.an) + " años.")


#%%
class Subcargo(Cargo):
    def __init__(self, puesto, sueldo, an, escuela):
        super().__init__(puesto, sueldo, an)
        self.escuela = escuela

    def getescuela(self):
        return self.escuela

    def contrato(self):
        print("El contrato indica que " + self.puesto +
              " tiene un sueldo de " + str(self.sueldo) +
              " millones en la " + self.escuela + ", por "
              + str(self.an) + " años.")

#%%
class Admin(Cargo):
    def __init__(self, puesto, sueldo, an, depto):
        super().__init__(puesto, sueldo, an)
        self.depto = depto

    def getdepto(self):
        return self.depto

    def contrato(self):
        print("El contrato indica que " + self.puesto +
              " tiene un sueldo de " + str(self.sueldo) +
              " millones en " + self.depto +
              ", por " + str(self.an) + " años.")

#%%
class JdC(Subcargo):
    def __init__(self, puesto, sueldo, an, escuela, car):
        super().__init__(puesto, sueldo, an, escuela)
        self.car = car
        self.an = (an - 1)

    def getan(self):
        return self.an

    def getcar(self):
        return self.car

    def contrato(self):
        print("El jefe de carrera de " + self.car +
              " trabaja bajo el mando del " + DdE.puesto +
              " en la facultad de la " + self.escuela +
              ", por " + str(self.an) + " años.")

#%%
R = Cargo("Rector", 40, 5)
DdE = Subcargo("Director de escuela", 20, 4, "EIE")
Fin = Subcargo("Director de finanzas", 22, 5, "finanzas")
JC = JdC("Jefe de carrera", 10, DdE.an,"EIE", "Civil Electrónica")


#%%
R.descripcion()
DdE.contrato()
Fin.contrato()
JC.contrato()

#%%
print(R.puesto)
print(str(DdE.sueldo) + " millones.")
print(Fin.escuela)
print(JC.escuela)
