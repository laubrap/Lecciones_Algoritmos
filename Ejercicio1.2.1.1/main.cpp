#include <iostream>
using namespace std;
/*Se ingresan por teclado dos valores numéricos enteros, a y b, se pide calcular e in-
formar por consola el resultado de las siguientes operaciones:

1. La suma: a+b.
2. La diferencia: a-b.
3. El producto: a*b.
4. El cociente: a/b, aceptando que b es distinto de 0 (cero).*/

int main() {
    int a,b;

    cout << "Ingrese dos numeros eteros: " << endl;
    cin >> a >> b;

    cout << "La suma es: " << a+b << endl;
    cout << "La diferencia es: " << a-b << endl;
    cout << "El producto es: " << a*b << endl;
    cout << "El el cociente es: " << a/(double)b << endl;

    return 0;
}