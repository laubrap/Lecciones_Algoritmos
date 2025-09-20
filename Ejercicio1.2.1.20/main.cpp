#include <iostream>
using namespace std;

/*Se ingresan varios valores numéricos enteros, finalizando la carga de datos al ingresar
un 0 (cero). Se pide informar:
1. Cantidad positivos.
2. Cantidad de negativos.
3. Porcentaje de pares.
4. Promedio de los positivos.
5. Porcentaje de negativos.*/

int main() {
        int num,cantidadPositivos=0,sumaPositivos=0,cantidadNegativos=0,cantidadPares=0,totales=0;

        cout << "ingrese un numero: " << endl;
        cin >> num;

        while (num!=0) {
            if (num>0){
                cantidadPositivos++;
                sumaPositivos+=num;
            }
            else
                cantidadNegativos++;

            if (num%2 == 0) {
                cantidadPares++;
            }
            totales++;
            cout << "ingrese un numero: " << endl;
            cin >> num;
        }
    double porcentajePositivos=((double)cantidadPositivos/totales)*100;
    double porcentajeNegativos=((double)cantidadNegativos/totales)*100;
    double promedioPostivios=(double)sumaPositivos/cantidadPositivos;

    cout << "la cantidad de numeros positivos es: " << cantidadPositivos << endl;
    cout << "la cantidad de numeros negativos es: " << cantidadNegativos << endl;
    cout << "el porcentaje de numeros positivos es: " << porcentajePositivos << endl;
    cout << "el porcentaje de numeros negativos es: " << porcentajeNegativos << endl;
    cout << "el promedio de numeros positivos es: " << promedioPostivios << endl;
    return 0;
}