#include <iostream>
using namespace std;

/*Desarrollar la función factorial que calcula y retorna el factorial de n.
double factorial(int n);
Invocando a factorial, desarrollar un programa que muestre el factorial
de los primeros t números naturales, donde t es un valor que se ingresa por consola.*/

double factorial (int num) {
    if (num<2) {
        return 1;
    }
    else
        return num * factorial(num-1);
}

int main() {
    int i=1,t;

    cout << "cuantos factoriales desea ver?: " << endl;
    cin >> t;

    while (i<=t) {
        cout << factorial(i) << endl;
        i++;
    }

    return 0;
}