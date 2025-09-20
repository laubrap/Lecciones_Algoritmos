#include <iostream>
using namespace std;

/*Se ingresan dos valores numéricos enteros que corresponden a un mes y un año (1
para enero, 2 para febrero, etcétera), se pide informar cuántos días tiene el mes;
teniendo en cuenta que el año podría ser bisiesto.*/

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

    cout << "ingrese el anio y el mes, para determinar sus dias: " << endl;
    cin >> anio >> mes;
    cout << "Ese mes tiene: " << diasMes(mes,anio) << endl;

    return 0;
}
