#include <iostream>
using namespace std;

/*Dado un valor numérico entero positivo n, informar los primeros n números primos.
Por ejemplo: si n==6 entonces la salida debe ser: 2, 3, 5, 7, 11, 13.*/

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
    int cantidad;

    cout << "Cuantos numeros primos desea que se muestren? " << endl;
    cin >> cantidad;

    int i = 2,j=0;
    while (j<cantidad) {
        if (esPrimo(i)) {
            cout << i << endl;
            j++;
        }
        i++;
    }

}