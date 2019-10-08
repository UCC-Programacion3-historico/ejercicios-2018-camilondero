#include <iostream>
#include "../Cola/Cola.h"

using namespace std;

int main() {
    std::cout << "Ejercicio 04/01\n" << std::endl;

    Cola<int>  C1;
    Cola<int> C2;
    int ele1;
    int ele2;
    int dato1;
    int dato2;
    bool c=true;

    cout<<"ingrese cantidad de elementos de la cola 1"<<endl;
    cin>>ele1;
    cout<<"ingrese la cantidad de elemntos de la cola 2"<<endl;
    cin>>ele2;


    if (c=ele1==ele2)
    {
        for(int i=0;i<ele1;i++)
        {cout<<"ingrese dato"<<endl;
            cin>>dato1;
            C1.encolar(dato1);
        }

        for(int i=0;i<ele2;i++)
        {cout<<"ingrese dato"<<endl;
            cin>>dato2;
            C2.encolar(dato2);
        }

        bool b=true;

    while(!C1.esVacia()&&!C2.esVacia()&&b)
    {
        b=C1.desencolar()==C2.desencolar();
    }

        if(b)
        {cout<<"las colas son iguales";}
}
    if(!c)
    cout<<"las colas son distintas";
    return 0;
}