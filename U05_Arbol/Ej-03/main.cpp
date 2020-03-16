
/*Implementar el método contarPorNivel que devuelve el número de nódos del nivel iésimo de
un árbol binario.*/
//mmmmmmmmmmm no

#include <iostream>
#include "../Arbol/ArbolBinarioAVL.h"
using namespace std;/*
int main() {
    int n;
    cout<<"ingrese cantidad de nodos"<<endl;
    cin>>n;
    int a;
    ArbolBinario<int> arbol;
    for (int i = 0; i < n ; ++i) {
        cout<<" Numero a ingresar en el arbol "<<endl;
        cin>>a;
        arbol.put(a);
    }
    arbol.inorder();
    arbol.postorder();
    arbol.preorder();

}*/

int main() {

    ArbolBinarioAVL<int> A;

    A.put(2);
    A.put(3);
    A.put(1);
    A.put(30);
    A.put(9);
    A.put(12);
    A.put(6);
    A.put(15);

    A.print();
    cout<<A.SumarHojas();
}