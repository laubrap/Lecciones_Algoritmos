
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
    string sub=substring(h,3,7);
    cout << "El substring de 3 a 7 de holaaaaaaaaholaholaaaaaa es " << sub << endl;

    //substring
    string sub1=substring(h,1);
    cout << "El substring de 1 al final de holaaaaaaaaholaholaaaaaa es " << sub1 << endl;

    //index of
    cout << "el index de la primer 'o' es: " << indexOf(h,'o') << endl;

    //index of con offset
    cout << "el index de la primer 'o' es: " << indexOf(h,'o',3) << endl;

    //posicion primera ocurrencia del string
    cout << "la primera ocurrencia de hola en holaaaaaaaaholaholaaaaaa es " << indexOf(h,"sdssdsola") << endl;

    //posicion primera ocurrencia del string con offset
    cout << "la primera ocurrencia de hola en holaaaaaaaaholaholaaaaaa con offset 3 es " << indexOf(h,"hola",3) << endl;

    //la posicion de la ultima aparicion del caracter
    cout << "la ultima ocurrencia del caracter 'h' en holaaaaaaaaholaholaaaaaa es: " << lastIndexOf(h,'h') << endl;

    //la ocurrencia n-esima del caracter c en la cadena holaaaaaaaaholaholaaaaaa
    cout << "la ultima ocurrencia 4 del caracter 'h' en holaaaaaaaaholaholaaaaaa es: " << indexOfN(h,'h',4) << endl;

    //pasaje de caracter a int
    cout << "el caracter A pasado a int es: " << charToInt('A') << endl;

    //pasaje de caracter a int
    cout << "el int 3 pasado a char es: " << intToChar(10) << endl;
    return 0;
}

#endif
