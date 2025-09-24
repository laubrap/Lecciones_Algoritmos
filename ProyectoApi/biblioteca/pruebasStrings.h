//
// Created by br4pz on 9/24/25.
//

#ifndef PROYECTOAPI_PRUEBASSTRINGS_H
#define PROYECTOAPI_PRUEBASSTRINGS_H

void pruebasStrings() {
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

    //i-esimo digito del numero (soporta nros negativos debido a abs(n)
    cout << "El 2do digito del numero 12345 es " << getDigit(12345,2) << endl;

    //cuenta la cantidad de digitos
    cout << "la cantidad de digitos de 12345 es:" << digitCount(12345) << endl;

    //pasa numero a string
    cout << "el numero 123456 a string es: " << intToString(123456) << endl;
}

#endif //PROYECTOAPI_PRUEBASSTRINGS_H