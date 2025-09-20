#include <iostream>
using namespace std;

/*Dado un número de ocho dígitos que representa una fecha con formato aaaammdd,
se pide mostrar por separado el día, el mes y el año de la fecha ingresada.*/

int main() {
    int fecha;

    cout << "ingrese una fecha con formato aaaammdd: " << endl;
    cin >> fecha;

    int dia=fecha%100, mes=(fecha%10000)/100,anio=fecha/10000;

    cout << "La fecha es " << anio << " / " << mes << " / " << dia << endl;

    return 0;
}