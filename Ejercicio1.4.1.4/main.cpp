#include "tadTimer.h"

/*Implementar el TAD Timer cuya funcionalidad permite medir el tiempo transcurrido
entre dos momentos.*/

void f(int n)
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++);
}

int main() {
    int n;
    Timer t=timer();

    cout << "empieza " << endl;
    timerStart(t);

    cout << "Ingrese el numero: " << endl;
    cin >> n;

    f(n);

    cout << "termina " << endl;
    timerStop(t);

    cout << "la operacion duro: " << timerElapsedTime(t) <<  endl;


    return 0;
}