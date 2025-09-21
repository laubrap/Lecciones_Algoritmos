#include <iostream>
using namespace std;

/*Se dispone de un conjunto de valores enteros positivos cuyo ingreso finaliza con la
llegada de un número negativo.
El conjunto está dividido en subconjuntos, separados entre sí mediante valores
0 (cero). Se pide informar:
1. Por cada subconjunto:
a. Promedio de sus valores.
b. Valor mínimo.
2. Para el conjunto completo:
a. Cantidad de subconjuntos.
b. Sumatoria de sus valores.
c. Número del subconjunto en el que se ingresó el mayor valor (será
único), indicando también cuál fue ese valor y en qué posición
relativa se encontró.*/

int main() {
    int num=0,posRelativa,posRelMax,numeroDeConj;
    bool primeroSubconjunto,flagMaximoSub,maximoConj=true,primeroConjunto=true;
    int sumaSubconjunto,cantNumSubconj,minSub,cantidadDeSubconjuntos=0,sumatoriaConjunto=0,maximoSub;


    while (num>=0) {

        sumaSubconjunto=0,cantNumSubconj=0,posRelativa=0;
        primeroSubconjunto=true,flagMaximoSub=true;

        cout << "ingrese un numero (negatio para salir): " << endl;
        cin >> num;

        while (num!=0) {

            //parte para el promedio

            cantNumSubconj++;
            sumaSubconjunto+=num;

            //parte para el minimo
            if (primeroSubconjunto) {
                primeroSubconjunto=false;
                minSub=num;
            }
            else if (num<minSub) {
                minSub=num;
            }

            //parte maximo conjunto
            if (flagMaximoSub) {
                maximoSub=num;
                flagMaximoSub=false;
            }
            else if (maximoSub<num) {
                maximoSub=num;
                posRelativa=cantNumSubconj;
            }

            cout << "ingrese un numero (0 para pasar a otro subconjunto): " << endl;
            cin >> num;
        }
        //cantidad subconjuntos
        cantidadDeSubconjuntos++;
        sumatoriaConjunto+=sumaSubconjunto;


        if (primeroConjunto) {
            posRelMax=posRelativa;
            numeroDeConj=cantidadDeSubconjuntos;
            maximoConj=maximoSub;
            primeroConjunto=false;
        }
        else if (maximoConj<maximoSub) {
            posRelMax=posRelativa;
            numeroDeConj=cantidadDeSubconjuntos;
            maximoConj=maximoSub;
        }

        cout << "El promedio es: " << sumaSubconjunto/(double)cantNumSubconj << endl;
        cout << "El minimo del subconjunto es: " << minSub << endl;

        cout << "ingrese un numero (-1 para salir): " << endl;
        cin >> num;
    }

    cout << "la cantidad de subconjuntos es: " << cantidadDeSubconjuntos << endl;
    cout << "la sumatoria de todo el conjunto es: " << sumatoriaConjunto << endl;
    cout << "El maximo de todos los conjuntos es: " << maximoConj << " su numero de conjunto es: " << numeroDeConj <<
        " dentro de este fue ingresado en la pos: " << posRelMax << endl;

    return 0;
}