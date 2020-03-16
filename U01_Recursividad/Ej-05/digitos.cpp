
/*Escribir segmentos de programa que lleven a cabo de forma recursiva, cada una de las
siguientes tareas:
a) Calcule la parte entera del cociente, cuando el entero a se divide por el entero b.
b) Calcule el resto entero, cuando el entero a es dividido por el entero b.
c) Utilice los módulos a) y b) para escribir una función recursiva que dado un entero no
negativo lo imprima como una serie de dígitos separados por espacios.
Ej: dado 1024, debe escribir 1 0 2 4*/

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
        return a;
    else

    return resto(a-b,b);
}



void escribir_espaciado(unsigned int num) {
    if (num<10)
    {
        cout<<num<<" ";
        return;
    }
    else
    {
        escribir_espaciado(cociente(num, 10));
        cout<<resto(num, 10)<<" ";
    }

}
