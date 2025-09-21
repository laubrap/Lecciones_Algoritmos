#include <iostream>
using namespace std;

/*Se ingresan n conjuntos de m valores numéricos cada uno. Se pide informar:
1. Para cada uno de los n conjuntos:
a. El valor promedio.
b. El máximo valor.
c. Porcentaje de valores positivos.
2. Para todo el lote de datos
a. Valor promedio.
b. Porcentaje de valores negativos.
c. Valor mínimo.:*/


int main() {
    int n,m;

    cout << "cuantos conjuntos desea?: " << endl;
    cin >> n;
    cout << "de cuantos numeros?: " << endl;
    cin >> m;

    bool primeroSubconj,primeroConj=true;
    int i=0,j,num,cantidadSubconj=0,sumaSubconj=0,maximoSubconj=0,
        cantPosSubconj=0,sumaTotales=0,cantTotales=0,cantNeg=0,menorSubConj=0,menorConj=0;

    while (i<n) {
        sumaSubconj=0;
        cantidadSubconj=0;
        primeroSubconj=true;
        maximoSubconj=0;
        menorSubConj=0;
        cantPosSubconj=0;
        j=0;

        while (j<m) {
            cout << "ingrese un numero: " << endl;
            cin >> num;

            if (primeroSubconj) {
                primeroSubconj=false;
                maximoSubconj=num;
                menorSubConj=num;
            }
            else if (maximoSubconj<num)
                maximoSubconj=num;

            if (menorSubConj>num)
                menorSubConj=num;

            if (num>0) {
                cantPosSubconj++;
            }
            else if (num<0) {
                cantNeg++;
            }


            sumaSubconj+=num;
            cantidadSubconj++;

            sumaTotales+=num;
            cantTotales++;

            j++;
        }

        if (primeroConj) {
            menorConj=menorSubConj;
            primeroConj=false;
        }
        else if(menorConj>menorSubConj){
            menorConj=menorSubConj;
        }

        cout << "el promedio es: " << sumaSubconj/(double)cantidadSubconj << endl;
        cout << "el maximo del subconjunto es: " << maximoSubconj << endl;
        cout << "el porcentaje de positivos es: " << (cantPosSubconj/(double)cantidadSubconj)*100 << endl;

        i++;
    }
    cout << "el promedio total es: " << sumaTotales/(double)cantTotales << endl;
    cout << "el porcentaje de negativos es: " << (cantNeg/(double)cantTotales)*100 << endl;
    cout << "el menor del conjunto es " << menorConj;

    return 0;
}