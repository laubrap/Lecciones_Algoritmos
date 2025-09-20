#include <iostream>
using namespace std;

/*Dado un valor numérico entero positivo n, informar los primeros n múltiplos de 5
que no sean múltiplos de 3.
Por ejemplo: si n fuera 6, la salida deberá ser: 5, 10, 20, 25, 35, 40.*/

bool esMultiploDe(int numero,int divisor) {
    return (numero%divisor)==0;
}

int main() {
    int cantidad,i=0,j=0;
    cout << "Ingrese la cantidad de múltiplos de 5 que no sean múltiplos de 3: " << endl;
    cin >> cantidad;


    while (j<cantidad){
        if (esMultiploDe(i,5) && !esMultiploDe(i,3) ) {
            cout << i << endl;
            j++;
        }
        i++;
    }

    return 0;
}