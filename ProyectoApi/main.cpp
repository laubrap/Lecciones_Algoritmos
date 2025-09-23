
#ifndef _MAIN
#define _MAIN

#include <iostream>
#include "biblioteca/funciones/strings.hpp"
#include "biblioteca/funciones/tokens.hpp"
#include "biblioteca/funciones/files.hpp"
#include "biblioteca/tads/parte2/Array.hpp"
#include "biblioteca/tads/parte2/Map.hpp"
#include "biblioteca/tads/parte2/List.hpp"
#include "biblioteca/tads/parte2/Stack.hpp"
#include "biblioteca/tads/parte2/Queue.hpp"
#include "biblioteca/tads/parte1/Coll.hpp"
#include "biblioteca/tads/parte1/MultidimColl.hpp"
using namespace std;

int main()
{
    //long
    string h="holaaaaaaaaholaholaaaaaa";
    cout << "hola  long: " << length(h) << endl;

    //cantidad caracteres
    cout << "la cantidad de veces que aparece la a " << charCount(h,'a') << endl;

    //substring
    string sub=substring(h,1,4);
    cout << "El substring de 3 a 7 de holaaaaa es " << sub << endl;

    //substring
    string sub1=substring(h,1);
    cout << "El substring de 3 al final de holaaaaa es " << sub1 << endl;

    //index of
    cout << "el index de la primer 'o' es: " << indexOf(h,'o') << endl;

    //index of con offset
    cout << "el index de la primer 'o' es: " << indexOf(h,'o',3) << endl;

    //posicion primera ocurrencia del string
    cout << "la primera ocurrencia de aloja en hola es " << indexOf(h,"aloja") << endl;

    return 0;
}

#endif
