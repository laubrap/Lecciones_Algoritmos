#include <iostream>
using namespace std;

/*Dado un valor numérico entero positivo n, se pide mostrar el factorial de los primeros
n números naturales.*/

int factorial(int num) {
    if (num<2)
        return 1;
    else
        return num * factorial(num-1);
}

int main() {
    int cantidad,i=1;

    cout << "cuantos factoriales desea ver?: " << endl;
    cin >> cantidad;

    while (i<=cantidad) {
        cout << "el factorial de " << i << " es: " << factorial(i) << endl;
        i++;
    }

    return 0;
}