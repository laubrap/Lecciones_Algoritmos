#include "fechaTad.h"

/*Crear un TAD para encapsular la lógica de una fecha.
1. Analizar qué atributos debe tener su estructura.
2. Analizar qué funcionalidad debe proveer.
3. Desarrollar las funciones y la estructura del TAD.
4. Probar el desarrollo anterior.*/

int main() {

    Fecha f=fecha(11,12,2005);

    if (fechaValidar(f)) {
        cout << "La fecha es valida " << fechaToString(f) << endl;
    }
    else {
        cout << "Fecha invalida " << fechaToString(f) << endl;
    }

    fechaAddDias(f,375);

    cout << "la fecha es: " << fechaToString(f) << endl;

    return 0;
}