#include <iostream>
#include "../Lista/Lista.h"
#include "fnInvierte.h"

int main() {
    std::cout << "Ejercicio 02/01\n" << std::endl;
    Lista<int> lista;
    int dato;
    std::cout << "Insertar elementos de la lista" << std::endl;
    for(int i=0; i<8; i++){
        std::cin >> dato;
        lista.insertarUltimo(dato);
    }

    fnInvierte(&lista);

    std::cout << "\nLista Invertida: " << std::endl;

    for(int i=0; i<8; i++){
        std::cout << lista.getDato(i) << std::endl;
    }


    return 0;
}