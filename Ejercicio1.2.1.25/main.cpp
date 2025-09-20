#include <iostream>
using namespace std;

/*Dado un conjunto de valores numéricos que finaliza con el ingreso de un 0 (cero),
informar cuál es el mayor de los negativos, y cuál el menor de los positivos.*/

int main() {
    int num,mayorNeg=0,menorPos=0;
    bool flagPosi=true,flagNeg=true;

    cout << "ingrese un numero: " << endl;
    cin >> num;

    while (num!=0) {

        if (num > 0 && flagPosi) {
            menorPos=num;
            flagPosi=false;
        }
        else if (num > 0 && !flagPosi && menorPos>num) {
            menorPos=num;
        }
        else if (num < 0 && flagNeg) {
            mayorNeg=num;
            flagNeg=false;
        }
        else if (num < 0 && !flagNeg&& mayorNeg<num) {
            mayorNeg=num;
        }

        cout << "ingrese un numero: " << endl;
        cin >> num;
    }

    cout << "el menor de los positivos es: " << menorPos << endl;
    cout << "el mayor de los negativos es: " << mayorNeg << endl;

    return 0;
}