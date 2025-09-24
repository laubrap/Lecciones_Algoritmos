#ifndef _TSTRINGS_T_
#define _TSTRINGS_T_

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdint.h>
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
int indexOf(string s,string toSearch) {
   int i=0;
   while (length(toSearch)+i <= length(s)) {
      if (substring(s,i,length(toSearch)+i)==toSearch) {
         return i;
      }
      i++;
   }
   return -1;

}

/*Descripción: Retorna la posición que ocupa la primera ocurrencia de toSearch
dentro de la cadena s, descartando los primeros offeset caracteres (desplaza-
miento inicial).*/
int indexOf(string s,string toSearch,int offset) // ok
{
   return indexOf(substring(s,offset),toSearch);
}

//Descripción: Retorna la posición de la última ocurrencia del carácter c dentro de s.
int lastIndexOf(string s,char c){
   int i=0,index=-1;

   while (s[i]!='\0'){
      if (s[i]==c){
         index=i;
      }
      i++;
   }
   return index;
}

//
int indexOfN(string s,char c,int n)
{
   if (charCount(s,c)<n || n==0) {
      return -1;
   }

   int i=0,ocurrencia=0;
   while (s[i]!='\0') {
      if (s[i]==c) {
         ocurrencia++;
         if (ocurrencia==n) {
            return i;
         }
      }
      i++;
   }
}

//Retorna el valor numérico que representa el carácter c.
int charToInt(char c)
{
   if (c>='0' && c <='9') {
      return c-'0';
   }
   if (c>='A' && c<='Z') {
      return c-'A' + 10;
   }
   if (c>='a' && c<='z') {
      return c - 'a' + 10;
   }
   return -1;
}

//Descripción: Retorna el carácter que representa al valor de i,
char intToChar(int i)
{
   if (i>=0 && i<=9) {
      return i + '0';
   }
   if (i>=10 && i<=36) {
      return 'A'+i-10;
   }
   if (i>=36 && i<=61) {
      return 'a'+i-36;
   }
   return '?';
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
