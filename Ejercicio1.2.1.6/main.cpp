#include <iostream>
using namespace std;

/*Se ingresan tres valores numéricos enteros, diferentes entre sí, informar cuál es el
menor, cuál está en el medio y cuál es el mayor.*/

int main() {
    int valor1,valor2,valor3;

    cout << "Ingrese tres valores numericos: " << endl;
    cin >> valor1 >> valor2 >> valor3;

    if (valor1>valor2 && valor2>valor3) {
        cout << "El mayor es: " << valor1 << endl;
        cout << "El medio es: " << valor2 << endl;
        cout << "El menor es: " << valor3 << endl;
    }
    else if (valor1>valor3 && valor3>valor2) {
        cout << "El mayor es: " << valor1 << endl;
        cout << "El medio es: " << valor3 << endl;
        cout << "El menor es: " << valor2 << endl;
    }
    else if (valor2>valor1 && valor1>valor3) {
        cout << "El mayor es: " << valor2 << endl;
        cout << "El medio es: " << valor1 << endl;
        cout << "El menor es: " << valor3 << endl;
    }
    else if (valor2>valor3 && valor3>valor1) {
        cout << "El mayor es: " << valor2 << endl;
        cout << "El medio es: " << valor3 << endl;
        cout << "El menor es: " << valor1 << endl;
    }
    else if (valor3>valor2 && valor2>valor1) {
        cout << "El mayor es: " << valor3 << endl;
        cout << "El medio es: " << valor2 << endl;
        cout << "El menor es: " << valor1 << endl;
    }
    else {
        cout << "El mayor es: " << valor3 << endl;
        cout << "El medio es: " << valor1 << endl;
        cout << "El menor es: " << valor2 << endl;
    }


    return 0;
}