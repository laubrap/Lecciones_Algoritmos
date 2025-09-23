#ifndef EJERCICIO1_4_1_1_TADFRACCIONES_H
#define EJERCICIO1_4_1_1_TADFRACCIONES_H

#include <iostream>
using namespace std;

struct Fraccion {
    double numerador;
    double denomindador;
};

Fraccion fraccion(double numerador,double denominador) {
    return {numerador,denominador};
}

double fraccionToDecimal(Fraccion f) {
    return f.numerador/f.denomindador;
}

Fraccion fraccionesMultiplicar(Fraccion f1, Fraccion f2) {
    Fraccion multi;
    multi.numerador=(f1.numerador)*(f2.numerador);
    multi.denomindador=(f1.denomindador)*(f2.denomindador);
    return multi;
}

Fraccion fraccionesDividir(Fraccion f1, Fraccion f2) {
    Fraccion div;
    div.numerador=(f1.numerador)*(f2.denomindador);
    div.denomindador=(f1.denomindador)*(f2.numerador);
    return div;
}

string fraccionToString(Fraccion f) {
    string numerador=to_string(f.numerador);
    string denominador=to_string(f.denomindador);
    return numerador+"/"+denominador;
}

#endif //EJERCICIO1_4_1_1_TADFRACCIONES_H