#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <stdexcept>
#include <iostream>

template<class K, class T>
class NodoArbolAVL {
public:
    T dato;
    K clave;
    NodoArbolAVL<K, T> *izq, *der;
    char altura;

    NodoArbolAVL(K clave, T dato) : dato(dato), clave(clave) {
        der = izq = nullptr;
        altura = 0;
    }
};

template<class K, class T>
class ArbolBinarioAVL {
private:
    NodoArbolAVL <K, T> *raiz;
public:
    ArbolBinarioAVL();

    /**
     * Agrega un dato al árbol
     * @param clave Clave para agregar el dato
     * @param dato Dato a agregar
     */
    void put(K clave, T dato) {
        raiz = put(clave, dato, raiz);
    };

    /**
     * Busca un dato en el árbol. Si no esta el dato en el árbol
     * tira una excepción
     * @param clave Valor a buscar
     * @return el valor buscado
     */
    T search(K clave) {
        return search(clave, raiz);
    }

    ~ArbolBinarioAVL();

    bool esVacio();


private:
    NodoArbolAVL <K, T> *put(K clave, T dato, NodoArbolAVL <K, T> *r);

    T search(K clave, NodoArbolAVL <K, T> *r);

    NodoArbolAVL <K, T> *buscarMax(NodoArbolAVL <K, T> *r, bool *encontre);


    int altura(NodoArbolAVL <K, T> *r) {
        if (r == nullptr)
            return -1;
        else
            return r->altura;
    }

    NodoArbolAVL <K, T> *rotarIzq(NodoArbolAVL <K, T> *k2) {
        NodoArbolAVL <K, T> *k1 = k2->izq;
        k2->izq = k1->der;
        k1->der = k2;
        k2->altura = max(altura(k2->izq), altura(k2->der)) + 1;
        k1->altura = max(altura(k1->izq), k2->altura) + 1;
        return k1;
    }


    NodoArbolAVL <K, T> *rotarDer(NodoArbolAVL <K, T> *k1) {
        NodoArbolAVL <K, T> *k2 = k1->der;
        k1->der = k2->izq;
        k2->izq = k1;
        k1->altura = max(altura(k1->izq), altura(k1->der)) + 1;
        k2->altura = max(altura(k2->der), k1->altura) + 1;
        return k2;
    }

    NodoArbolAVL <K, T> *rotarDobleIzq(NodoArbolAVL <K, T> *k3) {
        k3->izq = rotarDer(k3->izq);
        return rotarIzq(k3);
    }

    NodoArbolAVL <K, T> *rotarDobleDer(NodoArbolAVL <K, T> *k1) {
        k1->der = rotarIzq(k1->der);
        return rotarDer(k1);
    }

    int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }
};


/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */
template<class K, class T>
ArbolBinarioAVL<K, T>::ArbolBinarioAVL() {
    raiz = nullptr;
}


/**
 * Destructor del Arbol
 */
template<class K, class T>
ArbolBinarioAVL<K, T>::~ArbolBinarioAVL() {
    //TODO: hacer destructor
}


/**
 * Informa si un árbol esta vacío
 * @return
 */
template<class K, class T>
bool ArbolBinarioAVL<K, T>::esVacio() {
    return raiz == nullptr;
}

template<class K, class T>
NodoArbolAVL <K, T> *ArbolBinarioAVL<K, T>::put(K clave, T dato, NodoArbolAVL <K, T> *r) {

    if (r == nullptr) {
        return new NodoArbolAVL<K, T>(clave, dato);
    }


    if (clave < r->clave) {
        r->izq = put(clave, dato, r->izq);
        if (altura(r->izq) - altura(r->der) == 2) {
            if (clave < r->izq->clave)
                r = rotarIzq(r);
            else
                r = rotarDobleIzq(r);
        }
    } else if (clave > r->clave) {
        r->der = put(clave, dato, r->der);
        if (altura(r->der) - altura(r->izq) == 2) {
            if (clave > r->der->clave)
                r = rotarDer(r);
            else
                r = rotarDobleDer(r);
        }
    } else { // Son iguales

        throw 404;
    }

    if (altura(r->izq) > altura(r->der))
        r->altura = altura(r->izq) + 1;
    else
        r->altura = altura(r->der) + 1;

    return r;
}

template<class K, class T>
T ArbolBinarioAVL<K, T>::search(K clave, NodoArbolAVL <K, T> *r) {
    if (r == nullptr) {
        throw std::out_of_range("Elemento no encontrado");
    }
    if (r->clave == clave)
        return r->dato;
    if (r->clave > clave)
        return search(clave, r->izq);
    else
        return search(clave, r->der);
}



template<class K, class T>
NodoArbolAVL <K, T> *ArbolBinarioAVL<K, T>::buscarMax(NodoArbolAVL <K, T> *r, bool *encontre) {
    NodoArbolAVL <K, T> *ret;
    *encontre = false;

    if (r->der == nullptr) {
        *encontre = true;
        return r;
    }

    ret = buscarMax(r->der, encontre);
    if (*encontre) {
        r->der = nullptr;
        *encontre = false;
    }

    return ret;

}


#endif //HASHMAP_H