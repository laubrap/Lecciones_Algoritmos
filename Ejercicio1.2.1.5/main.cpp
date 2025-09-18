#include <iostream>
using namespace std;

/*Se ingresa por teclado dos valores numéricos enteros, informar cuál es el mayor y
cuál el menor. Si son iguales, entonces, mostrar un mensaje con el siguiente texto:
“Los valores ingresados son iguales”.*/

int main() {
    int valor1,valor2;

    cout << "Ingrese dos valores numericos: " << endl;
    cin >> valor1 >> valor2;

    if (valor1==valor2)
        cout << "Los valores ingresados son iguales";
    else if (valor1>valor2)
        cout << "El mayor es: " << valor1;
    else
        cout << "El mayor es: " << valor2;


    return 0;
}