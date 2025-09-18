#include <iostream>
using namespace std;

int multiplicacionSumasSucesivas(int num1,int num2) {
    int sum=0;

    for (int i=0;i<num2;i++) {
        sum+=num1;
    }
    return sum;
}

int factorial(int num) {
    int factorial=num;

    if (num==0 || num==1) {
        return 1;
    }
    else {
        int i=1;
        while (i<num) {
            factorial=factorial*i;
            i++;
        }
    }
    return factorial;
}

int factorialRecursivo(int num) {
    if(num==0 || num==1) {
        return 1;
    }
    else {
        return num * factorialRecursivo(num-1);
    }
}

int main() {
    //informe el producto de dos numeros a traves de sumas sucesivas
    int num1, num2,sum;
    cout << "Ingrese dos numeros:" << endl;
    cin >> num1 >> num2;

    sum=multiplicacionSumasSucesivas(num1,num2);

    cout << "la multiplicacion es: " << sum << endl;

    cout << "Ingrese un numero para calcular el factorial" << endl;
    cin >> num1;

    int fact=factorialRecursivo(num1);
    cout << "El factorial es: " << fact << endl;
    int facto=factorial(num1);
    cout << "El factorial es: " << facto << endl;
}