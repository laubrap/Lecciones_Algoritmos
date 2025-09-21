//
// Created by br4pz on 9/20/25.
//

#ifndef EJERCICIO1_2_1_10_MAIN_H
#define EJERCICIO1_2_1_10_MAIN_H


bool esBisiesto(int anio) {
    return (anio % 400 == 0) || ((anio % 4 == 0) && (anio % 100 != 0));
}

int diasAnteriores(int anio) {
    int i=0,sum=0;
    while (i<anio) {
        if (esBisiesto(i)) {
            sum+=366;
        }
        else
            sum+=365;
        i++;
    }
    return sum;
}

int diasMes(int mes,int anio) {
    switch (mes) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            return 31;
            break;
        case 4: case 6: case 9: case 11:
            return 30;
            break;
        default:
            if (esBisiesto(anio)) {
                return 29;
            }
            else
                return 28;
    }
}

int diasAnioActual(int dia,int mes,int anio) {
    if (mes == 1) {
        return dia;
    }
    else {
        int i = 1,suma=0;
        while (i<mes) {
            suma+=diasMes(i,anio);
            i++;
        }
        return suma+=dia;
    }
}


#endif //EJERCICIO1_2_1_10_MAIN_H