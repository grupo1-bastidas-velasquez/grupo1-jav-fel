#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Función que genera 24 temperaturas aleatorias que
//van desde -20°C a 40°C

float*getRandom(){

    static float TEMP[24];
    int i;

    srand48((unsigned) time( NULL ) );

    for (i=0; i<24; i++){
    TEMP[i]=drand48() * (60) -20;
    }

return TEMP;
}

//Función que calcula el promedio de las temperaturas

float Promedio(){
    float *c;
    static float prom, sum;
    int i;
    sum = 0;

    c = getRandom();

    for (i=0; i<24; i++){
        sum = sum + *(c+i);
        }

    prom = (sum/24);

return prom;
}

//Función que determina la temperatura máxima

int Max(){
    static float *temp = 0;
    int i = 0;
    int I = 0;
    float M;

    temp = getRandom();
    M = *(temp + i);
    for (i = 0; i<24; i++){
        if (M <= *(temp + i)){
            M = *(temp + i);
            I = i;
        }
    }
return I;
}

//Función que determina la temperatura mínima

int Min(){
    static float *temp = 0;
    int i = 0;
    int I = 0;
    float m;

    temp = getRandom();
    m = *(temp + i);
    for (i = 0; i<24; i++){
        if (m >= *(temp + i)){
            m = *(temp + i);
            I = i;
        }
    }
return I;
}

//Cuerpo principal de la función

int main (){

    float *t = 0;
    int i;
    int I = 0;
    float S = 0, P = 0, prom;

    t = getRandom();
    for (i = 0; i<24; i++){
    printf("La temperatura a las %d horas fue de %.1f°C\n", i,*(t+i));
    }

    prom = Promedio();
    printf("El promedio del día fue de %.1f°C\n", prom);

    I = Max();
    printf("La temperatura máxima ocurrió a las %d horas. \n", I);

    I = Min();
    printf("La temperatura mínima ocurrió a las %d horas. \n", I);

    return 0;
}
