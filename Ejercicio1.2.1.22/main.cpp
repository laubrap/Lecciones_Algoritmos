#include <iostream>
using namespace std;

/*Dados tres valores numéricos enteros positivos: n, a y b, informar el n-ésimo múltiplo
de a que no es múltiplo de b.*/

bool esMultiploDe(int numero,int divisor) {
    return (numero%divisor)==0;
}

int main() {
    int n,a,b;

    cout << "ingrese que n multiplo quiere " << endl;
    cin >> n;
    cout << "que sea multiplo de " << endl;
    cin >> a;
    cout << "que no sea multiplo de " << endl;
    cin >> b;

    int i=1,j=0;

    while (i<=n) {
        j++;
        if (esMultiploDe(j,a) && !esMultiploDe(j,b)) {
            i++;
        }
    }
    cout << "el resultado es: " << j << endl;

    return 0;
}