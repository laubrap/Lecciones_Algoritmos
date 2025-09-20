#include <iostream>
using namespace std;

/*Dado un valor entero positivo, informar si es un número primo.
NOTA: Un número es primo si sólo es divisible por sí mismo y por 1.*/

bool esPrimo(int numero) {
    int i = numero,divisores=0;
    while(i>0) {
        if (numero%i == 0) {
            divisores++;
        }
      i--;
    }
    return divisores<=2;

}

int main() {
    int num;

    cout << "ingrese un numero para validar si es primo: " << endl;
    cin >> num;
    if (esPrimo(num))
        cout << num <<" es primo"<< endl;
    else
        cout << num <<" NO es primo"<< endl;

    return 0;
}