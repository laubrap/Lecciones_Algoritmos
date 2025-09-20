#include <iostream>
using namespace std;

/*Sea un conjunto de valores numéricos que finaliza al ingresar un 0 (cero), informar
cuál es el mínimo valor considerando sólo aquellos que pertenecen al intervalo [-16, 27].*/

int main() {
    double num,minInter=0;
    bool flagMin=true;

    cout << "ingrese un numero: " << endl;
    cin >> num;

    while (num!=0) {
        if (num >= -16 && num < 27 && flagMin) {
            minInter=num;
            flagMin=false;
        }
        else if (num >= -16 && num < 27 && !flagMin && num<minInter) {
            minInter=num;
        }

        cout << "ingrese un numero: " << endl;
        cin >> num;
    }
    cout << "el minimo del intervalo [-16, 27] es: " << minInter << endl;

    return 0;
}