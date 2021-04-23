#include <stdio.h>
#include <string.h>

int main (){
    char datos[4800], TEMP [100][2] = {0}, Hum[100][3]={0};
    int i, j = 0, h = 0, C1 = 0, C2 = 0, D;

    //Obtención de la trama

    printf("datos:\n");
    scanf("%s", datos);
    D = strlen(datos);

    //Separar datos de las tramas

    for (i = 0; i < D; i++){
        if (datos[i] == '6' & datos[i+1] == '0'){
            TEMP[j][0] = datos[i-2];
            TEMP[j][1] = datos[i-1];
            j = j + 1;
            C1 = C1 + 1; //contador asociado a temperatura
        }

        if (datos[i] == '8' & datos[i+1] == '8'){
            Hum[h][0] = datos[i-3];
            Hum[h][1] = datos[i-2];
            Hum[h][2] = datos[i-1];
            h = h + 1;
            C2 = C2 + 1; //contador asociado a humedad
        }
    }

    //Datos registrados

    printf("\n");
    printf("Cantidad de temperaturas: %d \n", C1);
    printf("Trama Router 1: \n");
    for (i = 0; i < C1; i++){
        printf("TEMP[%d] = %c%c[°C] \n", i+1, TEMP[i][0], TEMP[i][1]);
    }

    printf("\n");
    printf("Cantidad de humedades: %d \n", C2);
    printf("Trama Router 2: \n");
    for (i = 0; i < C2; i++){
        printf("Hum[%d] = %c%c%c \n", i+1, Hum[i][0], Hum[i][1], Hum[i][2]);
    }

    return 0;

}
