#include <stdio.h>

int main(){

    char cad [50], car;
    int i, c = 0;

//Recepción de cadena, ingresada por usuario

    printf("Ingrese una cadena de datos: \n");
    scanf("%s", cad);

//Recepción de caracter a contar

    printf("Ingrese el caracter a contar: \n");
    scanf("%s", &car);

//Conteo del caracter ingresado

    for (i = 0; i < 50; i++)
        if (cad[i] == car)
        {
            c = c + 1;
        }

    printf("El caracter %c se repite %i veces.\n", car, c);
}
