//
// Created by br4pz on 12/15/25.
//

#ifndef LISTASCONSUBLISTAS_FUNCIONES_H
#define LISTASCONSUBLISTAS_FUNCIONES_H

#include <iostream>


struct Materia {
    int legajoAlumno;
    char nombre[50];
    int nota;
};

struct NodoMateria {
    Materia materia;
    NodoMateria *sgte;
};

struct Alumno {
    char nombre[50];
    char apellido[50];
    char DNI[50];
    int legajo;
    int codCarrera;
};

struct NodoAlumno {
    Alumno alu;
    NodoAlumno *sgte;
    NodoMateria *sublistaSgte;
};


void insertarAlumno(NodoAlumno *&inicio,Alumno aInsertar) {
    NodoAlumno *nuevoNodo = new NodoAlumno();
    nuevoNodo->alu=aInsertar;
    nuevoNodo->sgte=NULL;
    nuevoNodo->sublistaSgte=NULL;

    NodoAlumno *paux=inicio;

    if (paux==NULL) {
        inicio=nuevoNodo;
    }
    else {
        while (paux->sgte!=NULL) {
            paux=paux->sgte;
        }
        paux->sgte = nuevoNodo;
    }
}

void leerArchivoInsertarAlumnoLista(NodoAlumno *&inicio,char rutaArchivo[]) {
    FILE *f = fopen(rutaArchivo,"rb");
    Alumno alumno;

    while (fread(&alumno,sizeof(alumno),1,f)) {
        insertarAlumno(inicio,alumno);
    }
    fclose(f);
}

void insertarMateria(NodoAlumno *&inicio,Materia materia) {
    NodoMateria *nuevoNodo;
    NodoAlumno *paux=inicio;

    while (paux!=NULL) {
        if (paux->alu.legajo == materia.legajoAlumno) {
            nuevoNodo = new NodoMateria();
            nuevoNodo->materia=materia;
            nuevoNodo->sgte=NULL;

            NodoMateria *auxMateria = paux->sublistaSgte;

            if (auxMateria==NULL) {
                paux->sublistaSgte=nuevoNodo;
            }
            else {
                while (auxMateria->sgte!=NULL) {
                    auxMateria=auxMateria->sgte;
                }
                auxMateria->sgte=nuevoNodo;
            }
        }
        paux=paux->sgte;
    }
}

void leerArchivoInsertarMateria(NodoAlumno *&inicio,char rutaArchivo[]) {
    FILE *f = fopen(rutaArchivo,"rb");
    Materia materia;


    while (fread(&materia,sizeof(materia),1,f)) {
        insertarMateria(inicio,materia);
    }

    fclose(f);
}



#endif //LISTASCONSUBLISTAS_FUNCIONES_H