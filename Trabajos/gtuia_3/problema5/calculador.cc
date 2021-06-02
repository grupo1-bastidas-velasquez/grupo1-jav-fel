#include <iostream>
//#include <stdlib.h>
#include <math.h>
//#include <stdio.h>

using namespace std;

//float media_aritmetica(int[],int N); //declaramos la función que calcula la media aritmética
//float varianza(int[]); //declaramos la función que calcula la varianza
//float desviacion(int[]); //declaramos la función que calcula la desviación estándar
//float moda(int[]); //declaramos la funció que calcula la moda
//float me, v, d, mo;
//int  suma;
//int *ALU[N];

int numeronotas(){
	int N=0;
	cout << "Cuantas notas posee el alumno \n";
	cin >> N;
	return N;
}

int * notas(int N){
	int * ALU = new int[N];
	for(int i=0; i < N; i++){
	cout << "Ingrese la nota numero " <<i+1 <<": " <<'\n';
	cin >> ALU[i];
	}
	return ALU;
}

float media_aritmetica(int N, int *ALU){
	float ma =0;
	float suma=0;
	for (int i=0; i < N; i++){
		suma += ALU[N];
	ma = suma / N;
	}
	return ma;
}
float varianza(int N, int *ALU){
	int n = N;
	float media = media_aritmetica(N, ALU);
	float var = 0, vari = 0;
	for (int i=0; i <N; i++) {
	float notaa = ALU[N];
	var += pow((notaa - media), 2);
	}
	vari= var / (n-1);
	return vari;
}

float desviacion(int N, float La_varianza, int *ALU){
	float var = varianza;
	float desviacion_estandar = sqrt(var);
	return desviacion_estandar;
}

int main (){
	float desviacionst = desviacion;
	float la_varianza = 0;
	int promedio=0;
	N = numeronotas();
	ALU = notas(N);
	promedio = media_aritmetica(N, ALU);
	la_varianza = varianza(N, ALU);
	desviacionst= desviacion(N, la_varianza, ALU);
	cout << "El promedio del alumno es:" <<promedio <<"\n " << "La varianza es: " <<la_varianza << "\n La desviación estándar es :" << desviacionst
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
