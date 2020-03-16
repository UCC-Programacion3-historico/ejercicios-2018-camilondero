
#ifndef NODOARBOL_H
#define NODOARBOL_H

template<class T>
class NodoArbolAVL {
public:
    T dato;
    NodoArbolAVL<T> *izq, *der;
    char altura;

    NodoArbolAVL(T dato) : dato(dato) {
            der = izq = nullptr;
            altura = 0;
    }
};

#endif //HASHENTRY_H