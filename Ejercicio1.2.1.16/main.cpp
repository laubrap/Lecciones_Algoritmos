#include <iostream>
using namespace std;

/*Dado un valor numérico entero positivo n, informar el n-ésimo término de la suce-
sión de Fibonacci. Por ejemplo: si n es 6, la salida del programa debe ser 8.

NOTA: Los primeros dos términos de la serie de Fibonacci son 1 y 1. Luego, cada
término se calcula como la suma de los dos términos anteriores. Así, los primeros
términos de la serie de Fibonacci son: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, etcétera.*/

int fibonacciRecursivo(int numero) {
    if (numero==0)
        return 0;
    else if (numero==1)
        return 1;
    else
        return fibonacciRecursivo(numero-1) + fibonacciRecursivo(numero-2);
}

int main() {
    int termino;

    cout << "que termino de fibonacci quiere mostrar? " << endl;
    cin >> termino;

    cout << "El termino " << termino <<" de la sucesion de fibonacci es: "<< fibonacciRecursivo(termino);
    return 0;
}