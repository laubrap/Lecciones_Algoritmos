//
// Created by br4pz on 9/22/25.
//

#ifndef EJERCICIO1_4_1_2_FECHATAD_H
#define EJERCICIO1_4_1_2_FECHATAD_H

#include <iostream>
using namespace std;

struct Fecha {
    int dia;
    int mes;
    int anio;
};

void _getDate(int& dia, int& mes, int& anio)
{
    // fecha actual expresada en segundos
    time_t timestamp;
    time(&timestamp);
    // separo la fecha actual en atributos
    struct tm* fechaActual = localtime(&timestamp);
    dia = fechaActual->tm_mday;
    mes = fechaActual->tm_mon+1;
    anio = fechaActual->tm_year+1900;
}

Fecha fecha(int dia,int mes,int anio) {
    return {dia,mes,anio};
}

Fecha fecha() {
    int dia,mes,anio;
    _getDate(dia,mes,anio);
    return {dia,mes,anio};
}

string fechaToString(Fecha f) {
    string d,m,a;

    d=to_string(f.dia);
    m=to_string(f.mes);
    a=to_string(f.anio);
    return a+"/"+m+"/"+d;
}

void fechaDia(Fecha f,int& dia) {
    dia=f.dia;
}

void fechaMes(Fecha f,int& mes) {
    mes=f.mes;
}

void fechaAnio(Fecha f,int& anio) {
    anio=f.anio;
}

bool fechaEsBisiesto(Fecha f) {
    return (f.anio % 400 == 0) || ((f.anio % 4 == 0) && (f.anio % 100 != 0));
}

int diasMes(Fecha f) {
    switch (f.mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        default:
            if (fechaEsBisiesto(f)) {
                return 29;
            }
            else
                return 28;
    }
}

bool fechaValidar(Fecha f) {
    bool valida=false;
    if (f.mes<=12) {
        if (f.dia < diasMes(f)) {
            valida=true;
        }
    }
    return valida;
}

void fechaAddDias(Fecha& f,int dias) {
    while (dias!=0) {
        if (f.dia+dias > diasMes(f)) {
            dias=dias-(diasMes(f)-f.dia);
            f.mes++;
            f.dia=1;
            if (f.mes>12) {
                f.anio++;
                f.mes=1;
                dias--;
            }
        }
        else {
            f.dia=f.dia+dias;
            dias=0;
        }
    }
}

#endif //EJERCICIO1_4_1_2_FECHATAD_H