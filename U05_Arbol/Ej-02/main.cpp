/*Reconstruir un árbol binario a partir de los recorridos siguientes:
Preorden: 2, 5, 3, 9, 7, 1, 6, 4, 8.
Inorden: 9, 3, 7, 5, 1, 2, 6, 8, 4.
Inorden: 5, 6, 12, 10, 1, 9, 13, 4, 8, 2, 7, 3, 11.
Postorden: 6, 5, 10, 9, 1, 13, 12, 2, 8, 3, 11, 7, 4.*/
#include <iostream>
#include "../Arbol/ArbolBinarioAVL.h"

using namespace std;
int main() {

    ArbolBinarioAVL<int> Ab;

    Ab.put(2);
    Ab.put(5);
    Ab.put(3);
    Ab.put(9);
    Ab.put(7);
    Ab.put(1);
    Ab.put(6);
    Ab.put(125);
    Ab.put(-3);
    Ab.put(7);
    Ab.put(1);
    Ab.put(4);
    Ab.put(8);
    Ab.put(10);
    Ab.put(40);
    Ab.put(1);
    Ab.put(2);
    Ab.put(-88);
    Ab.put(100);
    Ab.put(4);
    Ab.put(12);

  //cout<<  Ab.SumarHojas();

  Ab.print();
  //cout<<Ab.contarHastaNivel(0);

  cout<<Ab.NodosTotales();

   // Ab.preorder();

   //cout<<Ab.CantNiveles();

   //Ab.VerNivel(2);

  // cout<<Ab.numNoN(1);
//cout<< Ab.AlturaArbol();
cout<<Ab.chicoGrande();



}