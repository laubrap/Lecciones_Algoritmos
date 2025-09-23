#include "TadFracciones.h"

int main() {
    Fraccion frac=fraccion(1,4),frac2=fraccion(1,20);

    cout << "La faccion" << fraccionToString(frac) << " a decimal es: " << fraccionToDecimal(frac) << endl;

    cout << "La fraccion de: " << fraccionToDecimal(frac) << " * " << fraccionToDecimal(frac2) << " es " << endl;
    cout << fraccionToDecimal(fraccionesMultiplicar(frac,frac2)) << endl;

    cout << "La fraccion de: " << fraccionToDecimal(frac) << " / " << fraccionToDecimal(frac2) << " es " << endl;
    cout << fraccionToDecimal(fraccionesDividir(frac,frac2)) << endl;

    return 0;
}