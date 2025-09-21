#include <iostream>
using namespace std;

/*Desarrollar la siguiente función:
int fechaUnificar(int anio,int mes,int dia);

La función debe unificar los valores de anio, mes y dia en un número en-
tero de ocho dígitos, con formato aaaammdd. Por ejemplo: si anio fuese 2020, mes

10 y dia 15, entonces, el valor de retorno de fechaUnificar será: 20201015.
Invocando a fechaUnificar, desarrollar un programa donde el usuario
ingresa el día, mes y año de una fecha (como valores separados), y obtiene por
consola la fecha unificada con formato aaaammdd.*/

int fechaUnificar(int a,int m,int d) {
    return (a*10000)+(m*100)+d;
}

int main() {
    int dia,mes,anio;

    cout << "Ingrese la fecha: dia, mes y anio" << endl;
    cin >> dia >> mes >> anio;

    cout << "la fecha unificada es: " << fechaUnificar(anio,mes,dia) << endl;

    return 0;
}