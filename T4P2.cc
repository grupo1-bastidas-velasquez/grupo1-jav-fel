#include <iostream>

using namespace std;

void decodificador(char *);

int main(){
	char cad[50];
	cout << "Ingrese la cadena de caracteres: \n";
	fgets(cad,50,stdin);
	decodificador(cad);
	cout << "\n";
return 0;
}

void decodificador(char *caden){
	int i=0,j,n;
	while (caden[i] != '\0'){
	if (isalpha (caden[i])){
		n = caden[i-1] - 48;
		if (n>9){
			cout << "\nHa introducido dos letras juntas, vuelva a correr el programa";
			break;
		}
	
			for(j=0; j<n ; j++)
				putchar(caden[i]);
	}
	i++;
}
}
