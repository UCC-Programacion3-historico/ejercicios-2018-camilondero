#include <iostream>
#include "../Lista/Lista.h"

using namespace std;

void printInverso(Lista<int> &L, int p){

    for (int i = p; i >= 0; i--) {

        cout<<L.getDato(i)<<endl;
    }
}
//PASAR NUMEROS DE DECIMAL A BINARIO
int main(){

    Lista<int> L;

    L.insertarUltimo(100);
    L.insertarUltimo(90);
    L.insertarUltimo(60);
    L.insertarUltimo(10);
    L.insertarUltimo(0);
    L.insertarUltimo(6);
    L.print();

    printInverso(L,4);



    //L.Binario();

    //L.print();
}

/*busqueda binaria

int BusquedaBinaria(int a[], int n, int clave) {

    int central, bajo, alto;
    int valorCentral;
    bajo = 0;
    alto = n - 1;
    while (bajo <= alto) {

        central = (bajo + alto) / 2; //indice del elemento central
        valorCentral = a[central]; //valor del indice central

        if (clave == valorCentral)
            return central;    //encontrado, devuelve posicion
        else if (clave < valorCentral)
            alto = central - 1; //ir a sublista inferior
        else
            bajo = central + 1; //ir a sublista superior
    }

    return 0;  //elemento no encontrado
}

int main(){

    int v[100];

    for (int i = 0; i <5 ; ++i) {

        cout<<"ingresar valor= "<<endl;
        cin>> v[i];

    }

    cout<<BusquedaBinaria(v,5,2);


}*/

