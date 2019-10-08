#include <iostream>
#include "../Pila/Pila.h"
/*  Ejercicio N°2.
Escriba una función que indique si dos pilas son iguales. Se entiende que dos pilas son
iguales cuando sus elementos son idénticos y aparecen en el mismo orden.*/
using  namespace std;
int main() {
    std::cout << "Ejercicio 03/02\n" << std::endl;

    Pila<int> P1;
    Pila<int> P2;
    Pila<int> Aux1;
    Pila<int> Aux2;
    int dato;

    for(int i=0; i<5;i++)
    {
        cout<<"ingrese dato"<<endl;
        cin>>dato;
        P1.push(dato);
    }

    for(int i=0; i<5;i++)
    {
        cout<<"ingrese dato"<<endl;
        cin>>dato;
        P2.push(dato);
    }

    bool b=true;

    while(!P1.esVacia()&& b)
    {
        Aux1.push(P1.peek());
        Aux2.push(P2.peek());
        b= P1.pop()==P2.pop();

    }

    if(b)
        cout<<"pilas son iguales"<<endl;
    else
        cout<<"pilas distintas"<<endl;
    return 0;
}