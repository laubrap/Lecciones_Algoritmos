#include <iostream>
using namespace std;

int toMin(int time);

void excedente(double precio, int minLibres,double valorMinutoExcedente,int minutosUtilizados,int &minutosExcedidos,double &importeAAbonar);

struct Plan {
    int precio;
    int minLibres;
    int cargoPorExcedente;
};

Plan plan(int precio,int min, int cargo) {
    return {precio,min,cargo};
}

int main() {
    char tipoAbono;
    int nroCelular,tiempoDeUso,excedidos,tiempoUso;
    double totalAbonar;
    string nombreAbonado,direccionAbonado;
    Plan a=plan(1500,1000,1),b=plan(1000,600,3),c=plan(700,400,5),
        d=plan(500,300,7),e=plan(350,100,10),planAbonado;


    cout << "Ingrese numero de celular: " << endl;
    cin >> nroCelular;

    while (nroCelular>0) {
        cout << "Ingrese el nombre: " << endl;
        cin >> nombreAbonado;
        cout << "Ingrese la direccion: " << endl;
        cin >> direccionAbonado;
        cout << "Ingrese el tiempo de uso (hhhmm): " << endl;
        cin >> tiempoDeUso;
        cout << "Ingrese tipo de abono: " << endl;
        cin >> tipoAbono;

        if (tipoAbono=='a') {
            planAbonado=a;
        }
        else if (tipoAbono=='b') {
            planAbonado=b;
        }
        else if (tipoAbono=='c') {
            planAbonado=c;
        }
        else if (tipoAbono=='d') {
            planAbonado=d;
        }
        else {
            planAbonado=e;
        }

        tiempoUso = toMin(tiempoDeUso);

        excedente(planAbonado.precio,planAbonado.minLibres,planAbonado.cargoPorExcedente,tiempoUso,excedidos,totalAbonar);

        cout <<"Abonado         Dirección       Min.Libres     Min Exced. Total a abonar" << endl;
        cout << nombreAbonado << "             " << direccionAbonado << "        " << planAbonado.minLibres << "         " << excedidos << "             " << totalAbonar << endl;

            cout << "Ingrese numero de celular: " << endl;
            cin >> nroCelular;
    }

    return 0;
}

int toMin(int time) {
    int h=time/100,m=time%100;
    return m+(h*60);
}

void excedente(double precio, int minLibres,double valorMinutoExcedente,int minutosUtilizados,int &minutosExcedidos,double &importeAAbonar) {
    importeAAbonar=precio;
    minutosExcedidos=0;
    if (minutosUtilizados>minLibres) {
        minutosExcedidos=minutosUtilizados-minLibres;
        importeAAbonar+=minutosExcedidos*valorMinutoExcedente;
    }
}
