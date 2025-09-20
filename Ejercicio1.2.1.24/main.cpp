#include <iostream>
using namespace std;

/*Cada uno de los siguientes ítems debe considerarse como un ejercicio en sí mismo.
1. Dados 100 valores enteros negativos, informar cuál es el menor.
2. Dados 100 valores enteros menores que 10, informar cuál es el menor.
3. Dados 100 valores enteros, informar cuál es el menor.*/

int main() {
    bool flag=true;
    int min=0,num;

    for (int i=0;i<100;i++) {
        cout << "ingrese un numero: " << endl;
        cin >> num;

        if (flag) {
            min=num;
            flag=false;
        }
        else if (min>num)
            min=num;
    }
    cout << "el minimo es: " << min << endl;
    return 0;
}