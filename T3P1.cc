#include <iostream>

using namespace std;

int main() {
        int CLA, CAT, ANT, RES;
        float SAL;

        cout << "Indique cuál es la clave del trabajador: ";
        cin >> CLA;
        cout << "\nIndique cual es la categoría del empleado: ";
        cin >> CAT;
        cout << "\nIndique en años cual es la antiguedad del trabajador en la empresa: ";
        cin >> ANT;
        cout << "\nEscriba el Salario del trabajador sin puntos: ";
        cin >> SAL;
        if (CAT ==3 | CAT ==4 &&  ANT >5){
        RES =1;
        }
        else if (CAT ==2 && ANT >7){
        RES =1;
        }
        else{
        RES =0;
        }
        if (RES ==1){
        cout << "El trabajador es apto para la plaza \n";
        }
        else {
        cout <<"El trabajador no está apto para la nueva plaza \n";
        }
return 0;
}
