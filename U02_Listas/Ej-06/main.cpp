

#include <iostream>
using namespace std;
#include "../Lista/Lista.h"

int main(){

Lista<int> L1;

    L1.insertarUltimo(2);

    L1.insertarUltimo(5);

    L1.insertarUltimo(7);

    L1.insertarUltimo(10);

    L1.insertarUltimo(1);

    L1.insertarUltimo(3);

    L1.print();

    L1.MoverGrande();

    L1.print();



}
