#include <iostream>
using namespace std;

/*Se ingresan tres valores que representan las longitudes de los lados de un triángulo,
informar cuál es el tipo del triángulo ingresado (isósceles, equilátero o escaleno).*/

int main() {
    int lado1,lado2,lado3;

    cout << "ingrese las medidas de los lados del triagulo: " << endl;
    cin >> lado1 >> lado2 >> lado3;

    if (lado1==lado2 && lado2==lado3) {
        cout << "Es equilatero" << endl;
    }
    else if (lado1!=lado2 && lado2!=lado3 && lado1!=lado3) {
        cout << "Es escaleno" << endl;
    }
    else
        cout << "Es isosceles" << endl;

    return 0;
}
