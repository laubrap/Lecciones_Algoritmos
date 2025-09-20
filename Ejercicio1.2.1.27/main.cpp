#include <iostream>
using namespace std;

/*Se ingresa un conjunto de pares (n, f), donde n es el nombre de una persona y f su
fecha de nacimiento, informar el nombre de la persona más joven y el de la más vieja.*/



int main() {
    int fecha,fechaJoven,fechaVieja;
    string masJoven,masVieja,nombre;
    bool primeraPersona=true;

    cout << "ingrese el nombre de la persona: " << endl;
    cin >> nombre;
    cout << "ingrese la fecha de nacimiento (aaaammdd)" << endl;
    cin >>fecha;

    while (fecha!=-1) {
        if (primeraPersona) {
            masJoven=nombre;
            masVieja=nombre;
            fechaJoven=fecha;
            fechaVieja=fecha;
            primeraPersona=false;
        }
        else if (!primeraPersona && fechaJoven<fecha) {
            masJoven=nombre;
            fechaJoven=fecha;
        }
        else if (!primeraPersona && fechaVieja>fecha) {
            masVieja=nombre;
            fechaVieja=fecha;
        }

        cout << "ingrese el nombre de la persona: " << endl;
        cin >> nombre;
        cout << "ingrese la fecha de nacimiento (aaaammdd)" << endl;
        cin >>fecha;
    }

    cout << "la persona mas vieja es: " << masVieja << " y nacio en: " << fechaVieja << endl;
    cout << "la persona mas joven es: " << masJoven << " y nacio en: " << fechaJoven << endl;

    return 0;
}