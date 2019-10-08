#include <iostream>
#include "../Pila/Pila.h"
/* Ejercicio N°1.
Escriba un programa que introduzca una palabra y utilice una pila para imprimir la misma
        palabra invertida.*/
using namespace std;

int main() {
    char arr[100];
    Pila<char> p;

    cout << "Introduzca una palabra" << endl;
    cin >> arr;

    for (int i = 0; arr[i] != '\0'; i++) {
        p.push(arr[i]);
    }

    while (!p.esVacia()) {
        cout << p.pop();
    }

    return 0;
}