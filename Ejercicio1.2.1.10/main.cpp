#include <iostream>
#include <cmath>
using namespace std;

/*Entre dos fechas indicadas por el usuario, informar cuál es la más cercana a la actual.
Se debe considerar los años bisiestos, entendiendo que un año es bisiesto si es
divisible por 4, o   por 400 pero no por 100.*/

bool esBisiesto(int anio) {
    return (anio % 400 == 0) || ((anio % 4 == 0) && (anio % 100 != 0));
}

int diasAnteriores(int anio) {
    int i=0,sum=0;
    while (i<anio) {
        if (esBisiesto(i)) {
            sum+=366;
        }
        else
            sum+=365;
        i++;
    }
    return sum;
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

int diasAnioActual(int dia,int mes,int anio) {
    if (mes == 1) {
        return dia;
    }
    else {
        int i = 1,suma=0;
        while (i<mes) {
            suma+=diasMes(i,anio);
            i++;
        }
        return suma+=dia;
    }
}

int main() {
    int diaActual,mesActual,anioActual;
    int diaFecha1,mesFecha1,anioFecha1;
    int diaFecha2,mesFecha2,anioFecha2;

    cout << "Ingrese la fecha actual, dia mes y anio: " << endl;
    cin >> diaActual >> mesActual >> anioActual;
    cout << "Ingrese la primer fecha, dia mes y anio: " << endl;
    cin >> diaFecha1 >> mesFecha1 >> anioFecha1;
    cout << "Ingrese la segunda fecha, dia mes y anio: " << endl;
    cin >> diaFecha2 >> mesFecha2 >> anioFecha2;

    int diasTotalesActual=
        diasAnteriores(anioActual)+diasAnioActual(diaActual,mesActual,anioActual);
    int diasTotalesFecha1=
        diasAnteriores(anioFecha1)+diasAnioActual(diaFecha1,mesFecha1,anioFecha1);
    int diasTotalesFecha2=
        diasAnteriores(anioFecha2)+diasAnioActual(diaFecha2,mesFecha2,anioFecha2);

    int diferenciaConFecha1=abs(diasTotalesActual-diasTotalesFecha1);
    int diferenciaConFecha2=abs(diasTotalesActual-diasTotalesFecha2);

    if (diferenciaConFecha1>diferenciaConFecha2) {
        cout << "la fecha mas proxima es " << anioFecha2 << " / " << mesFecha2<< " / "<< diaFecha2 << endl;
    }
    else
        cout << "la fecha mas proxima es " << anioFecha1 << " / " << mesFecha1<< " / "<< diaFecha1 << endl;
    return 0;
}