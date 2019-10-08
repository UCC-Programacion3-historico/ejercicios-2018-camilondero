#include <iostream>
#include "../Lista/Lista.h"
using  namespace std;
/*   Ejercicio N°3.
Escribir un programa que permita eliminar elementos de una lista de números aceptada por
teclado. El programa pregunta qué elemento borrar considerando que el primero por la
izquierda es el 0.*/


int main() {
    std::cout << "Ejercicio 01/03\n" << std::endl;

    Lista<int> lis;
    int dato;
    int tam;
    int nborrar;

    cout << "ingrese cantidad de elementos a ingresar" << endl;
    cin >> tam;

    for(int i=0; i<tam; i++)
    {
        cout<<"ingrese el dato"<<endl;
        cin>>dato;
        lis.insertarUltimo(dato);
    }

    cout<<"ingrese posicion del elemento a borrar"<<endl;
    cin>>nborrar;
    lis.remover(nborrar);
   lis.print();
}