#include <iostream>
using namespace std;

/*Desarrollar las siguientes funciones:
bool fechaEsAnioBisiesto(int a);
La función debe retornar true o false según el año a que recibe como
parámetro sea o no bisiesto.

int fechaDiasMes(int m,int a);
La función debe retornar la cantidad de días que tiene el mes m, donde 1 es
enero; 2, febrero, etcétera.

Invocando a las funciones anteriores, desarrollar un programa que, dado un
mes y año que el usuario ingresará por teclado, le indicará cuántos días tiene el mes.*/


bool esBisiesto(int anio) {
    return (anio % 400 == 0) || ((anio % 4 == 0) && (anio % 100 != 0));
}

int diasMes(int mes,int anio) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        default:
            if (esBisiesto(anio)) {
                return 29;
            }
            else
                return 28;
    }
}


int main() {
    int anio,mes;

    cout << "Ingrese el anio y el mes:" << endl;
    cin >> anio >> mes;

    cout << "la cantidad de dias del mes es: " << diasMes(mes,anio) << endl;

    return 0;
}