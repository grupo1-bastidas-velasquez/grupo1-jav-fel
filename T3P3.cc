#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//Función que genera un arreglo de largo 255 de números aleatorios, adaptada de la desarrollada en la guía 2

int getRandom (int ra[]){

    int i;

    srand ((unsigned)time (NULL));

    for (i = 0; i < 256; ++i){
        ra[i] = rand() % 256;
        printf("ra[%d] = %d \n", i, ra[i]);
    }
return 0;
}

//Función que convierte un entero a número binario

int bin(int num, int Bin[])
{
    int i, N, d;

    for (i = 0; i < 8; i++){
        N = num%2;
        num = num/2;
        Bin[i] = N;

        if (num == 1){
            Bin[i+1] = 1;
            break;
        }
    }
    return 0;
}

//Función principal
int main (){

int d;
int pos, numero, i = 0, I, x;
int binario[8]={0};
int ra[255];

    getRandom(ra);

    printf("Ingresar posición del arreglo: ");
    scanf("%d", &pos);

    numero = ra[pos];
    printf("La posición contiene el número: %d\n", numero);

    bin(numero, binario);
    printf("En binario, el número es: \n");
    for (i = 7; i >= 0; i--){
        printf("%d ", binario[i]);
    }
    printf("\n");

    for (i = 7; i >= 0; i--){
        if (binario[i]==1)
        {
            printf("LED %d está ON.\n", binario[i]);
        }
        else{
            printf("LED %d está OFF.\n", binario[i]);
        }
    }
    return 0;
}
