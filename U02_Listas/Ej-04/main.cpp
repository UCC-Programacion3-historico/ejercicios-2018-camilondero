#include <iostream>
#include "../Lista/Lista.h"
#include "union.h"
<<<<<<< HEAD
using  namespace std;

=======
>>>>>>> 667512902bd8e0d182aa525825d39ef02208e09a

int main() {
    Lista<int> a, b, *c;

    a.insertarUltimo(4);
    a.insertarUltimo(9);
    b.insertarUltimo(41);
    b.insertarUltimo(43);
    b.insertarUltimo(42);

    c = unir(a, b);

    c->print();

    std::cout << "Ejercicio 01/04\n" << std::endl;
    Lista<int> listaA;
    Lista<int> listaB;
    int datoA;
    int datoB;
    int cantA;
    int cantB;

    cout<<"ingrese cantidad de elementos de la lista A"<<endl;
    cin>>cantA;

    std::cout << "Insertar elementos de la lista" << std::endl;
    for(int i=0; i<cantA; i++){
        std::cin >> datoA;
        listaA.insertarUltimo(datoA);
    }

    cout<<"ingrese cantidad de elementos de la lista B"<<endl;
    cin>>cantB;

    std::cout << "Insertar elementos de la lista" << std::endl;
    for(int i=0; i<cantB; i++){
        std::cin >> datoB;
        listaB.insertarUltimo(datoB);
    }

    unir(listaA,listaB);

    listaA.print();
    return 0;
}