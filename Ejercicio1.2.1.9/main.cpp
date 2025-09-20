#include <iostream>
using namespace std;

/*Dada una terna de números naturales que representan el día, mes y año de una fecha,
se pide unificarlos en un único valor numérico entero de ocho dígitos (aaaammdd),
tal que los primeros cuatro dígitos representen el año, los dos siguientes el mes, y los
dos últimos el día.*/

int main() {
    int dia,mes,anio;

    cout << "Ingrese dia mes y anio: " << endl;
    cin >> dia >> mes >> anio;

    int fecha=dia+(mes*100)+(anio*10000);

    cout << "La fecha es " << fecha << endl;

    return 0;
}