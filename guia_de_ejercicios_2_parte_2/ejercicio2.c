#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>


using namespace std;

void decodificador(char *);

int main(){
	char cad[50];
	printf("\nIngrese la cadena de caracteres");
	gets(cad);
	decodificador(cad);
return 0;
}

void decodificador(char *cad){
	int i=0,j,n;
	while (cad[i] != '\0'){
	if (isalpha (cad[i])){
		n = cad[i-1] - 48;
		for(j=0; j<n ; j++)
			putchar(cad[i]);
		}
	i++;
}
}
