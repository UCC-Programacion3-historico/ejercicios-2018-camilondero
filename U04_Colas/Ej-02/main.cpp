#include <iostream>
#include "../Cola/Cola.h"
#include "../../U03_Pilas/Pila/Pila.h"
#include <string.h>
using namespace std;

/* Ejercicio N°2.
Utilizando una pila y una cola, realizar una función que reciba una cadena y devuelva el
        valor lógico verdadero si dicha cadena es un palidromo. No se deben tener en cuenta los
        espacios y signos de puntuación.

Ejemplos de palidromo:

* anita lava la tina
* la ruta natural
* la ruta nos aporto otro paso natural*/

int main() {
    std::cout << "Ejercicio 04/02\n" << std::endl;

    char frase[100];
    Pila<char> pila;
    Cola<char> cola;
    bool v=true;

    cout << "Introduzca una frase" << endl;
    gets(frase);

    for(int i=0; frase[i]!='\0';i++)
    {
        pila.push(frase[i]);
        cola.encolar(frase[i]);
    }

    while(!pila.esVacia()&&v)
    {
        v=pila.pop()==cola.desencolar();
    }

    if(v)
        cout<<"la palabra es un palidromo"<<endl;
    else
        cout<<"la palabra no es un palidromo"<<endl;




    return 0;
}