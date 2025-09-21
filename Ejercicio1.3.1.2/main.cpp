#include <iostream>
using namespace std;

/*Desarrollar la función esPrimo que retorna true o false según se determine
que n es un número primo o no:
bool esPrimo(int n);
Invocando a la función esPrimo, desarrollar un programa que muestre por
consola los primeros t números primos, donde t es un valor que ingresa el usuario.*/


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
    int i=1,j=2,t;

    cout << "cuantos primos desea ver?: " << endl;
    cin >> t;

    while (i<=t) {
        if (esPrimo(j)) {
            cout << j << endl;
            i++;
        }
        j++;
    }

    return 0;
}