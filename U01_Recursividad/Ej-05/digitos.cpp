#include <iostream>
#include "digitos.h"

using namespace std;

unsigned int cociente(unsigned int a, unsigned int b) {
    if(a<b)
        return 0;
    else

        return 1 + cociente(a-b,b);
}


unsigned int resto(unsigned int a, unsigned int b) {
    if(a<b)
        return 0;
    else

    return cociente(a-b,b);
}


void escribir_espaciado(unsigned int num) {
}
