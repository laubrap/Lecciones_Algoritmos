#include <iostream>
using namespace std;

/*Desarrollar la siguiente función:
void fechaDividir(int f,int& a,int& m,int& d);
La función recibe en f una fecha representada como un entero de ocho
dígitos con formato aaaammdd, y debe dividir sus componentes y asignarlos a los
parámetros a, m y d (año, mes y día, respectivamente).
Invocando a fechaDividir, desarrollar un programa donde el usuario
ingresa una fecha con formato aaaammdd y obtiene sus atributos por separado.*/

void fechaDividir(int f,int& a,int& m,int& d) {
    a=f/10000;
    m=(f/100)%100;
    d=f%100;
}

int main() {
    int fecha,dia,mes,anio;

    cout << "Ingrese la fecha expresada en aaaammdd: " << endl;
    cin >> fecha;

    fechaDividir(fecha,anio,mes,dia);

    cout << "la fecha separada es: " << dia << " / " << mes << " / " << anio << endl;

    return 0;
}