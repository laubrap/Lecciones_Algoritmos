#include <iostream>
using namespace std;

/*Se ingresan por teclado varios valores enteros positivos, de a uno por vez. Se
solicita informar:
1. Cuántos valores v fueron ingresados, tal que v<=12.
2. Cuántos valores v fueron ingresados, tal que12<v<=24.
3. Cuántos valores v fueron ingresados, tal que 24<v<=36.
4. Cuántos valores v fueron ingresados, tal que v==0 (cero).
La carga de datos finaliza cuando se ingresa un valor negativo.
 */

int main() {
    int num,i=0,j=0,k=0,l=0;

    cout << "ingrese un numero: " << endl;
    cin >> num;

    while (num>=0) {
        if (num==0)
            i++;
        else if(num<=12)
            j++;
        else if (num>12 && num<=24)
            k++;
        else if (num>24 && num<=36)
            l++;

        cout << "ingrese un numero: " << endl;
        cin >> num;
    }
    cout << "la cantidad de valores / valor == 0 es: " << i << endl;
    cout << "la cantidad de valores / 0 < valor <= 12 es: " << j << endl;
    cout << "la cantidad de valores / 12 < valor <= 24  es: " << k << endl;
    cout << "la cantidad de valores / 24 < valor <= 36 es: " << l << endl;
    return 0;
}