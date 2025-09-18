#include <iostream>
using namespace std;

/*Se ingresa por teclado un valor numérico entero, informar:
1. La quinta parte de dicho valor.
2. El resto que surge al dividir el valor ingresado en cinco partes iguales.
3. La séptima parte de la quinta parte del valor ingresado.*/

int main() {
    int num;

    cout << "ingrese un valor entero: " << endl;
    cin >> num;

    cout << "la quinta parte es: " << num/(double)5 << endl;
    cout << "El resto de dividir en 5 partes es: " << num%5 << endl;
    cout << "séptima parte de la quinta parte del valor es: " << num*(0.2 * (1/(double)7))<< endl;

    return 0;
}