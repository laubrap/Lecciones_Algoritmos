//
// Created by br4pz on 9/22/25.
//

#ifndef EJERCICIO1_4_1_3_HORATAD_H
#define EJERCICIO1_4_1_3_HORATAD_H

#include <iostream>
using namespace std;

struct Hora {
    int hs;
    int min;
    int seg;
};

void _getTime(int& hora, int& minuto, int& segundo)
{
    time_t timestamp;
    time(&timestamp);
    struct tm* tiempoActual = localtime(&timestamp);

    hora   = tiempoActual->tm_hour;
    minuto = tiempoActual->tm_min;
    segundo= tiempoActual->tm_sec;
}

Hora hora(int h,int m, int s) {
    return {h,m,s};
}

Hora hora() {
    int h,s,m;
    _getTime(h,m,s);
    return {h,m,s};
}

string horaToString(Hora hora) {
    string h,m,s;
    h=to_string(hora.hs);
    m=to_string(hora.min);
    s=to_string(hora.seg);
    return h+":"+m+":"+s;
}

int horaToSegundos(Hora h) {
    return (h.hs*360)+(h.min*60)+h.seg;
}

void horaAddHoras(Hora& h,int horas) {
    h.hs = (h.hs + horas) % 24;
}

void horaAddMinutos(Hora& h, int minutos) {
    h.min=(minutos+h.min)%60;
    h.hs=h.hs+(minutos/60);
}

void horaAddSegundos(Hora& h, int segundos) {
    h.seg=(h.seg+segundos)%60;
    int minutos=segundos/60;
    horaAddMinutos(h,minutos);
}

int diferenciaHoras(Hora h1, Hora h2) {
    return abs(h1.hs-h2.hs);
}

#endif //EJERCICIO1_4_1_3_HORATAD_H