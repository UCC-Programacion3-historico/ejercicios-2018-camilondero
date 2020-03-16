#include <iostream>
#include "../Arbol/ArbolBinarioAVL.h"

int main() {

    ArbolBinarioAVL<int> A;

    A.put(2);
    A.put(3);
    A.put(1);
    A.put(30);
    A.put(9);
    A.put(12);

    A.print();

    cout<<A.SumarHojas();
}