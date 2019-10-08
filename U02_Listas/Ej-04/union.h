#include "../Lista/Lista.h"

#ifndef UNION_H
#define UNION_H


template<class T>
Lista<T> unir(Lista<T> &lisA, Lista<T> &lisB) {

    int tam;
    tam=lisB.getTamanio();

    for(int i=0; i<tam; i++)
    {
        lisA.insertarUltimo(lisB.getDato(i));
    }
    return new Lista<T>();
}


#endif //UNION_H
