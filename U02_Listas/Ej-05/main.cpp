
#include <iostream>
#include "CircList.h"
using namespace std;

int main() {
    std::cout << "Ejercicio 01/05\n" << std::endl;
    CircList<int> cl;
    cl.insertarDato(1);
    cl.insertarDato(2);
    cl.insertarDato(3);
    cl.insertarDato(4);
    cl.insertarDato(5);
    cout<<"\nTamanio: "<<cl.getTamanio()<<endl;
    cl.Mostrarlista();
    return 0;
}