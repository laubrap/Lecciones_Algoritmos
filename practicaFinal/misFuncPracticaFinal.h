//
// Created by br4pz on 12/10/25.
//

#ifndef PRACTICAFINAL_MISFUNCPRACTICAFINAL_H
#define PRACTICAFINAL_MISFUNCPRACTICAFINAL_H

#include <iostream>
using namespace std;
#include <string.h>

struct Persona {
    int edad;
    char nombre[20];
};

struct Nodo {
    int numero;
    Nodo *sgte;
};

void mostrarVecInt(int vec[],int t) {
    int i = 0;
    while (i<t) {
        cout << vec[i] << " | ";
        i++;
    }
    cout << endl;
}

void copiarVector(int vectorCopiado[],int vectorReceptor[], int tCopiado, int tReceptor) {
    if (tCopiado > tReceptor) {
        return;
    }
    int i=0;
    while (i<tCopiado) {
        vectorReceptor[i] = vectorCopiado[i];
        i++;
    }
}

void llenarArrayPersona(Persona array[],int tam) {
    int i=0,edad;
    char nombre[20];
    while (i<tam) {
        cout <<" ingrese el nombre: " << endl;
            cin >> nombre;
        cout <<" ingrese la edad: " << endl;
            cin >> edad;
        array[i].edad=edad;
        strcpy(array[i].nombre,nombre);

        i++;
    }
}

void mostrarPersonas(Persona array[],int tam) {
    int i = 0;

    while (i<tam) {
        cout << " nombre: " << array[i].nombre << endl;
        cout << " edad: " << array[i].edad << endl;
        cout << "======================================" << endl;
        i++;
    }
}

void llenarMatriz(int matriz[][2],int filas, int col) {
    for (int i=0;i<filas;i++) {
        for (int j=0;j<col;j++) {
            cout << "ingrese un numero: " << endl;
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][2],int filas, int col) {
    for (int i=0;i<filas;i++) {
        for (int j=0;j<col;j++) {
            cout << matriz[i][j] << " | ";
        }
        cout << endl;
    }
}

void errorArray(int err) {
    if (err==0)
        cout << "El array se encuentra lleno " << endl;
}

bool insertarELementoAlFinal(int vector[],int tam,int elem) {
    int i = 0;
    while (i<tam) { //primero revisamos el tam para evitar seg fault
        if (vector[i]==0) {
            vector[i]=elem;
            return true;
        }
        i++;
    }
    return false;
}

int busquedaSecuencialEdad(Persona array[],int tam,int edadBuscada) {
    int i = 0;
    while (i<tam) {
        if (array[i].edad == edadBuscada) {
            return i;
        }
        i++;
    }
    return -1;
}

int busquedaBinaria(int array[],int tam,int aBuscar) {
    int final = tam,inicio = 0, central;
    while (inicio <= final) {
        central = (inicio + final)/2;
        if (array[central] == aBuscar) {
            return central;
        }
        if (array[central] > aBuscar) {
            final = central-1; // ya que si se encuentra en la ultima pos hay bucle
        }
        else
            inicio = central+1;
    }
    return -1;
}

void insertarAlFinal(int numero,Nodo *&inicio) {

    Nodo *nuevo=new Nodo;
    nuevo->sgte=NULL;
    nuevo->numero=numero;

    Nodo *paux = inicio;
    if (paux == NULL) {
        inicio = nuevo;
    }
    else {
        while (paux->sgte != NULL) {
            paux = paux ->sgte;
        }
        paux -> sgte = nuevo;
    }
}


bool esPar(int x) {
    return x%2 == 0;
}

void insertarPares(char nombreArchivo[], Nodo *&lista) {
    FILE *f = fopen(nombreArchivo,"rb");
    int x;

    while (fread(&x,sizeof(int),1,f)) {
        if (x <= 2000 && x >= 1000 && !esPar(x)) {
            insertarAlFinal(x,lista);
        }
    }
    fclose(f);
}



#endif //PRACTICAFINAL_MISFUNCPRACTICAFINAL_H