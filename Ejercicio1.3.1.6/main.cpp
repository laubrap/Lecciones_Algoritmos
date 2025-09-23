#include <iostream>
using namespace std;

/*funcion get date*/

void getDate(int& dia, int& mes, int& anio)
{
    time_t timestamp;
    time(&timestamp);

    struct tm* fechaActual = localtime(&timestamp);
    dia = fechaActual->tm_mday;
    mes = fechaActual->tm_mon+1;
    anio = fechaActual->tm_year+1900;
}

int main() {
    int d,m,a;

    // obtengo la fecha actual invocando a getDate
    getDate(d,m,a);
    cout<< "Dia: " << d <<endl;
    cout<< "Mes: " << m <<endl;
    cout<< "Anio: " << a <<endl;

    return 0;
}