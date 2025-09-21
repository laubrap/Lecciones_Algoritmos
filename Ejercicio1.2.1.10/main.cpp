#include <iostream>
#include <cmath>
#include "main.h"

using namespace std;

/*Entre dos fechas indicadas por el usuario, informar cuál es la más cercana a la actual.
Se debe considerar los años bisiestos, entendiendo que un año es bisiesto si es
divisible por 4, o   por 400 pero no por 100.*/

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