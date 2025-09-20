#include <iostream>
using namespace std;

/*Dados 50 valores numéricos enteros, que se ingresan de a uno por vez, se pide
informar el promedio de los mayores que 100, y la suma de los menores que -10.*/

int main() {
    int i=0,num,menores=0,mayores=0,cantidadMayores=0;

    while (i<50) {
        cout << "ingrese un numero: " << endl;
        cin >> num;

        if (num>100) {
            cantidadMayores++;
            mayores+=num;
        }
        else if (num<-10)
            menores+=num;
        i++;
    }

    cout << "el promedio de los mayores a 100 es: " << mayores/(double)cantidadMayores << endl;
    cout << "la suma de los menores a -10 es: " << menores << endl;

    return 0;
}