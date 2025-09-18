#include <iostream>
using namespace std;

/*Se ingresan por teclado dos valores numéricos enteros: a y b, se pide calcular e
informar el cociente a/b, validando que b sea distinto de cero. En tal caso, mostrar
un mensaje de error en la consola.*/

int main() {

    int a,b;

    cout << "Ingrese dos numeros eteros: " << endl;
    cin >> a >> b;

    if (b==0) {
        cout << "error, division por 0 no definida" << endl;
    }
    else
        cout << "la division es: " << a/(double)b << endl;

    return 0;
}