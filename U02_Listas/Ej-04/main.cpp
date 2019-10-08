#include <iostream>
#include "../Lista/Lista.h"
using  namespace std;

int main() {
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

    listaA.unir(listaA,listaB);

    listaA.print();
    return 0;
}