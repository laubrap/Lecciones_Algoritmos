#include "horaTad.h"

/*Crear un TAD para encapsular la lógica de una hora.
1. Analizar qué atributos debe tener su estructura.
2. Analizar qué funcionalidad debe proveer.
3. Desarrollar las funciones y la estructura del TAD.
4. Probar el desarrollo anterior.*/


int main() {

    Hora h=hora();

    cout << "La hora actual es: " << horaToString(h) << endl;

    horaAddHoras(h,15);

    cout << "La hora actual es: " << horaToString(h) << endl;

    horaAddMinutos(h,60);

    cout << "La hora actual es: " << horaToString(h) << endl;

    horaAddSegundos(h,60);

    cout << "La hora actual es: " << horaToString(h) << endl;
    return 0;
}