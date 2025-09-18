#include <iostream>
using namespace std;

/*Se ingresa por teclado dos valores numéricos enteros diferentes entre sí, informar
cuál es el mayor.*/

int main() {

    int valor1,valor2;

    cout << "Ingrese dos valores numericos diferentes: " << endl;
    cin >> valor1 >> valor2;

    if (valor1>valor2)
        cout << "El mayor es: " << valor1;
    else
        cout << "El mayor es: " << valor2;

    return 0;
}
