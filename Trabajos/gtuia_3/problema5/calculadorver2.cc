#include <iostream>
//#include <stdlib.h>
#include <math.h>
//#include <stdio.h>

using namespace std;

int main() {
	int N=0, max=0;
	float promedio = 0, suma =0 , var=0;
	cout << "Cuantas notas posee el alumno \n";
	cin >> N;
	int  ALU[N], moda[N];
	for(int i=0; i < N; i++){
	cout << "Ingrese la nota numero " <<i+1 <<" : " <<'\n';
	cin >> ALU[i];
	/*cout << ALU[N];*/
	}
	for (int i=0; i < N; i++){
		suma += ALU[N];
	}
	promedio = suma / N;
	for (int i=0; i < N; i++) {
		var += pow((ALU[i] - promedio),2);
		}
	float desviacion_estandar = sqrt(var);

	for (int i=1 ; i<=N; i++) {
		int contador =0;
			for (int j=0 ; 1<N; j++){
			if ( ALU[i] == ALU[j] ) {
			contador += 1;
			}
			}
		moda[i]=contador;
		}
	for (int n=0; n < N; n++){
		if (moda[n] > max){
		max = ALU[n];
		}
	}
	cout << "El promedio del alumno es:" <<promedio <<"\n " << "La varianza es: " <<var << "\n La desviación estándar es :" << desviacion_estandar ;
return 0;
}

	


/*
numeronotas();


	ALU(i)


	int ALU[N];
	for (int i=1;i<=N;i++){
	cout << "ingrese la nota número" <<i ;;
	cin >> buf;
	ALU[i]=buf;
	}
	media_aritmetica(ALU);
	varianza(ALU);
	desviacion(ALU);
	moda(ALU);
}

void media_aritmetica(int ALU[], int N){ //definición de la función media aritmética
	suma=0;
	float media;
	for (int i=1 ; i <= n; i++){
	suma=suma + ALU(i);
	}
	media= suma / N;
}
void moda(int ALU[]){
	int moda[N];
	int max=0;
		for (int i=1 ; i<=N; i++){
		contador =0;
			for (int j=1 ; 1<=N; j++){
			if ALU(i)==ALU(j);
			contador=contador +1;
			}
		moda[i]=contador;
		}
	for (int n=1; n <=N; n++){
	if moda(i)>max
		max=moda(i);
	}
	return ALU(max);
	}

void varianza(){
	for(int i = 1 ; i<=N; i++){
   		double rango;
   		rango = Math.pow(valor[i] - media,2f);
   		varianza = varianza + rango;
  	}
  	varianza = varianza / 10f;//suma de diferencias sobre "n" o "n - 1"
}
	
void desviacion(){
desviacion = Math.sqrt(varianza);
}
*/
