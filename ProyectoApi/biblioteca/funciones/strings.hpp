#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

//Cuenta la cantidad de caracteres que componen la cadena s.
int length(string s) {
   int i=0;
   while (s[i]!='\0') {
      i++;
   }
   return i;
}

//Cuenta la cantidad de veces que aparece el carácter c dentro de s.
int charCount(string s,char c)
{
   int i=0,j=0;
   while (s[i]!='\0') {
      if (s[i]==c) {
         j++;
      }
      i++;
   }
   return j;
}

//Retorna la subcadena de s comprendida entre las posiciones d (inclu-sive) y h (no inclusive).
string substring(string s,int d,int h){
   string sub;
   if (d>=0 && d<h && h<=length(s)-1) {
      while (d<h) {
         sub+=s[d];
         d++;
      }
   }
   return sub;
}

//Descripción: Retorna la subcadena de s comprendida entre la posición d y el final dela cadena.
string substring(string s,int d) // ok
{
   return substring(s,d,length(s)-1);
}

/*Descripción: Retorna la posición que ocupa la primera ocurrencia del carácter c
dentro de la cadena s.*/
int indexOf(string s,char c) // ok
{
   int i=0;
   while (s[i]!='\0') {
      if (s[i]==c) {
         return i;
      }
      i++;
   }
   return -1;
}

/*Descripción: Retorna la posición que ocupa la primera ocurrencia de un carácter c
dentro de la cadena s, descartando los primeros offeset caracteres (desplaza-
miento inicial).*/
int indexOf(string s,char c,int offSet)
{
   return indexOf(substring(s,offSet),c);
}

/*Descripción: Retorna la posición que ocupa la primera ocurrencia de toSearch dentro
de la cadena s.*/
int indexOf(string s,string toSearch) // ok
{
   bool primeraLetra;
   int i=0,j,aux,letrasCoincide,posPrimera=-1;

   if (length(s)>=length(toSearch)) {
      while (s[i]!='\0') {
         primeraLetra=true;
         letrasCoincide=0,j=0,posPrimera=-1,aux=i;
         while (toSearch[j]!='\0') {
            if (s[aux]==toSearch[j]) {
               letrasCoincide++;

               if (primeraLetra==true) {
                  primeraLetra=false;
                  posPrimera=aux;
               }

               if (letrasCoincide==length(toSearch) && substring(s,posPrimera,posPrimera+length(toSearch))==toSearch) {
                  return posPrimera;
               }
            }
            j++;
            aux++;
         }
         i++;
      }
   }
   return posPrimera;
}

int indexOf(string s,string toSearch,int offset) // ok
{
   return 0;
}

int lastIndexOf(string s,char c)
{
   return 0;
}

int indexOfN(string s,char c,int n)
{
   return 0;
}

int charToInt(char c)
{
   return 0;
}

char intToChar(int i)
{
   return 'X';
}

int getDigit(int n,int i)
{
   return 0;
}

int digitCount(int n)
{
   return 0;
}

string intToString(int i)
{
   return "";
}

int stringToInt(string s,int b) // ok
{
   return 0;
}

int stringToInt(string s) // ok
{
   return 0;
}

string charToString(char c)
{
   return "";
}

char stringToChar(string s)
{
   return 'X';
}

string stringToString(string s)
{
   return "";
}

string doubleToString(double d)
{
   return "";
}

double stringToDouble(string s)
{
   return 1.1;
}

bool isEmpty(string s)
{
   return true;
}

bool startsWith(string s,string x)
{
   return true;
}

bool endsWith(string s,string x)
{
   return true;
}

bool contains(string s,char c)
{
   return true;
}

string replace(string s,char oldChar,char newChar)
{
   return "";
}

string insertAt(string s,int pos,char c)
{
   return "";
}

string removeAt(string s,int pos)
{
   return "";
}

string ltrim(string s)
{
   return "";
}

string rtrim(string s)
{
   return "";
}

string trim(string s)
{
   return "";
}

string replicate(char c,int n)
{
   return "";
}

string spaces(int n)
{
   return "";
}

string lpad(string s,int n,char c)
{
   return "";
}

string rpad(string s,int n,char c)
{
   return "";
}

string cpad(string s,int n,char c)
{
   return "";
}

bool isDigit(char c)
{
   return true;
}

bool isLetter(char c)
{
   return true;
}

bool isUpperCase(char c)
{
   return true;
}

bool isLowerCase(char c)
{
   return true;
}

char toUpperCase(char c)
{
   return 'X';
}

char toLowerCase(char c)
{
   return 'X';
}

string toUpperCase(string s)
{
   return "";
}

string toLowerCase(string s)
{
   return "";
}

int cmpString(string a,string b)
{
   return 0;
}

int cmpDouble(double a,double b)
{
   return 0;
}

#endif
