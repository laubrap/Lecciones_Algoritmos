#include <iostream>
using namespace std;

/*Cada uno de los siguientes ítems debe considerarse como un ejercicio en sí mismo.
1. Dados 100 valores enteros positivos, informar cuál es el mayor.
2. Dados 100 valores enteros, todos mayores que -10, informar cuál es el mayor.
3. Dados 100 valores enteros, informar cuál es el mayor.*/

int main() {
    bool flag=true;
    int maximo=0,num;

    for (int i=0;i<100;i++) {
        cout << "ingrese un numero: " << endl;
        cin >> num;

        if (flag) {
            maximo=num;
            flag=false;
        }
        else if (maximo<num)
            maximo=num;
    }
    cout << "el maximo es: " << maximo << endl;

    return 0;
}