//Conversión de cantidad de sonidos de una chicharra a temperatura en grados Celcius (°C)

#include <stdio.h>

int main(){

//Declaración de variables S (cantidad de sonidos) y FA (temperatura en grados Farenheit (°F))
    int S;
    float FA;

//Se solicita al usuario ingresar el valor de S
    printf("Ingresar el número de sonidos emitidos por la chicharra en un minuto: ");
    scanf("%d", &S);

//El valor es convertido a temperatura en °F según la expresión provista en la guía
    FA = S/4 + 40;

//Se convierte la temperatura en °F a °C
    FA = (FA - 32) * 5/9;

    printf("La temperatura es %f °C\n", FA);
}
