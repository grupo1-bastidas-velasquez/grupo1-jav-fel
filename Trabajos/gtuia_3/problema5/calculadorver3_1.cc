#include <iostream>
//#include <stdlib.h>
#include <math.h>
//#include <stdio.h>

using namespace std;

int numero_de_notas(){
	int N = 0;
	cout << "Cuántas notas posee el alumno:" <<'\n';
	cin >> N;
	if (N<1 | N>100){
		cout << "La cantidad de notas debe estar entre 1 y 100. Reinicie el programa \n";
	return 0;
	}
	return N; 
}

int * notas_del_alumno(int N) {
	int * ALU = new int[N];
	cout <<"Ahora se le pedirá ingresar las notas del alumno, hágalo en formato 10 a 70. \n";
	for (int i = 0; i< N; i++){
		std::cout << "Ingrese nota " <<i+1 <<": " <<'\n' ;
		cin >> ALU[i];
	}
	return ALU;
}

float media_aritmetica(int N ,int *ALU){
	float promedio = 0;
	float suma = 0;
	for (int i =0; i < N; i++){
		suma += ALU[i];
	}
	promedio =  suma / N;
	return promedio;
}

int main() {
	int  max=0;
	float promedio = 0, suma =0 , var=0;
	int *ALU;
	int N=0;
	N = numero_de_notas();
	if (N==0){
		return 0;
	};
	ALU = notas_del_alumno(N);
	int moda[N];
	promedio = media_aritmetica(N, ALU);

	for (int i=0; i < N; i++) {
		var += (pow((ALU[i] - promedio),2))/N ;
		}
	float desviacion_estandar = sqrt(var);

	for (int i=0 ; i < N; i++) {
		int contador =0;
			for (int j=0 ; j < N; j++){
				if ( ALU[i] == ALU[j] ) {
				contador += 1;
				}
			}
		moda[i]=contador;
		}

	for (int k=0; k < N; k++){
		if (moda[k] > max){
		max = moda[k];
		//max = ALU[max];
		}
	}
	max=ALU[max]

	cout << "El promedio del alumno es:" <<promedio  <<"\n" << "La varianza es: " <<var << "\nLa desviación estándar es :" << desviacion_estandar <<'\n' <<"La moda es: " << max <<'\n';
return 0;
}

