#include <iostream>
#include "../Cola/Cola.h"
#include "ColaPriorida.h"
using  namespace std;
int main() {
    std::cout << "Ejercicio 04/04\n" << std::endl;

    int prioridad,d,embarazadas=0;

    ColaPrioridad colasuper(1) ;
    // colasuper 0 -> embarazadas
    // colasuper 1 -> gnte comun

    for(int i=0; i<10; i++)
    {
        cout<<"ingrese cantidad de productos"<<endl;
        cin>>d;
        cout<<"Ingrese su prioridad"<<endl;
        cin>>prioridad;

     if(prioridad==0)
         embarazadas++;
     colasuper.encolar(d,prioridad);

    }

    return 0;
}