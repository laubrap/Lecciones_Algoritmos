#include "misFuncPracticaFinal.h"

int main() {
    int vec[3] = {5,6,7}; //inicializacion total
    int vector[10] = {1,2,3,4}; //inicializacion parcial, inicializa con 0 el resto
    int vector2[]={1,3,4,5,6}; //declaracion implicita del tam ==> en este caso es 5

    mostrarVecInt(vec,3);
    mostrarVecInt(vector,10);
    mostrarVecInt(vector2,5);

    int posicion = busquedaBinaria(vector2,5,5);
    cout << "el elemento buscado " <<vector2[posicion] << "esta en la posicion "<< posicion << endl;

    copiarVector(vec,vector,3,10);
    mostrarVecInt(vector,10);
    bool err = insertarELementoAlFinal(vec,3,2231);
        errorArray(err);

    err = insertarELementoAlFinal(vector,10,291);
        errorArray(err);

    mostrarVecInt(vector,10);

    char hola[] = "holaaaaaa";
    char vectorChar[] = {'h','o','l','a'}; // al no tener el \0 espera hasta tener un caracter de corte

    cout << vectorChar << endl;

    Persona array[5];
    llenarArrayPersona(array,5);
    mostrarPersonas(array,5);
    int pos = busquedaSecuencialEdad(array,5,20);

    if (pos!=-1) {
        cout << "nombre persona buscada " << array[pos].nombre << endl;
    }

    int matriz[2][2];

    llenarMatriz(matriz,2,2);
    mostrarMatriz(matriz,2,2);

    FILE* f;
    if (f=fopen("hola.txt","wb")) {
        //si no se puede abrir, fopen evuelve NULL=> f=NULL => false
        fwrite(vec,sizeof(int),3,f);
        fclose(f);
    }



    return 0;
}

using namespace std;