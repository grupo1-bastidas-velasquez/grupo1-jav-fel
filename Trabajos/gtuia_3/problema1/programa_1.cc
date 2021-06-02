#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;
class trabajador {
    public:
        int CAT;
	int CLA;
	int ANT;
	float SAL;
	int RES;
};

int main() {
	printf("Indique cuál es la clave del trabajador: ");
	scanf("%d", CLA);
	printf("\n Indique cual es la categoría del empleado: ");
	scanf("%d", CAT);
	printf("\n Indique en años cual es la antiguedad del trabajador en la empresa: ");
	scanf("%d", ANT);
	printf("\n Escriba el Salario del trabajador sin puntos: ")
	scanf("%f", SAL);
	if (CAT ==3 | CAT ==4 &&  ANT >5){
	RES =1;
	}
	else if (CAT ==2 && ANT >7){
	RES =1;
	}
	else{
	RES =0;
	} 
	if (RES ==1){
	printf("El trabajador es apto para la plaza");
	}
	else {
	printf("El trabajador no está apto para la nueva plaza");
	}
return 0}
