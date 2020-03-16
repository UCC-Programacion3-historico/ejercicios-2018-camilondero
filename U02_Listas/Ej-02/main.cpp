#include <iostream>
#include "../Lista/Lista.h"
#include<iostream>

using namespace std;

/* Ejercicio N°2.
Escribir un programa que permita agregar no enteros a una lista de números aceptada por
teclado. El programa pregunta si debe agregar al principio, al final o en el medio y agrega el
elemento a la lista.*/


int main() {
    std::cout << "Ejercicio 01/02\n" << std::endl;

    Lista<float> lis;

    int tam;
    float dato;
    int opcion;
    int pos;

    cout << "ingrese cantidad de datos a ingresar" << endl;
    cin >> tam;

    for (int i = 0; i < tam; i++) {

        cout << "ingrese dato" << endl;
        cin >> dato;
        cout << "0 si desea ingresar al principio de la lista" << endl;
        cout << "1 si desea ingresar al medio de la lista" << endl;
        cout << "2 si desea ingresar al final de la lista" << endl;
        cin >> opcion;

        if (opcion == 0)
            lis.insertarPrimero(dato);
        else if (opcion == 1) {
            cout << "ingrese posicion a insertar" << endl;
            cin >> pos;
            lis.insertar(dato, pos);
        } else if (opcion == 2)
            lis.insertarUltimo(dato);
        else
            cout << "numero ingresado incorrecto" << endl;


    }
    return 0;
}