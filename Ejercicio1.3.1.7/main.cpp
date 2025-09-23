#include <iostream>
using namespace std;

/*Desarrollar la función today que retorna la fecha actual expresada como un entero
de ocho dígitos con formato aaaammdd.
int today();*/

void getDate(int& dia, int& mes, int& anio)
{
    time_t timestamp;
    time(&timestamp);

    struct tm* fechaActual = localtime(&timestamp);
    dia = fechaActual->tm_mday;
    mes = fechaActual->tm_mon+1;
    anio = fechaActual->tm_year+1900;
}

int fechaUnificar(int a,int m,int d) {
    return (a*10000)+(m*100)+d;
}


int today() {
    int dia,mes,anio;
    getDate(dia,mes,anio);
    return fechaUnificar(anio,mes,dia);
}

int main() {
    cout << "la fecha actual es: " << today() << endl;
    return 0;
}