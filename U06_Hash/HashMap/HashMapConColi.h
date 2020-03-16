#ifndef HASHMAP_H
#define HASHMAP_H

#include "ArbolBinarioAVL.h"

template<class K, class T>
class HashMap {
private:
    static unsigned int hashFunc(K clave);

    unsigned int (*hashFuncP)(K clave);

    ArbolBinarioAVL<K, T> **tabla;

    unsigned int tamanio;


public:
    HashMap(unsigned int k);

    HashMap(unsigned int k, unsigned int (*hashFuncP)(K clave));

    T get(K clave);

    void put(K clave, T valor);

    bool Coli(K clave, T valor);

    void remove(K clave);

    ~HashMap();

    bool esVacio();

    void print();

};

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k) {
    tabla = new ArbolBinarioAVL<K, T> *[k];
    tamanio = k;
    hashFuncP = hashFunc;
    for (int i = 0; i < tamanio; ++i) {
        tabla[i] = nullptr;
    }
}

template<class K, class T>
HashMap<K, T>::~HashMap() {

}

template<class K, class T>
T HashMap<K, T>::get(K clave) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr)
        throw 404;
    return tabla[idx]->search(clave);
}

template<class K, class T>
void HashMap<K, T>::put(K clave, T valor) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr){
        tabla[idx] = new ArbolBinarioAVL<K, T>;
        tabla[idx]->put(clave, valor);
    }
    else
        throw 404;
}

template<class K, class T>
bool HashMap<K, T>::Coli(K clave, T valor) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr)
        return false;
    try{
        tabla[idx]->search(clave);
        return true;
    }catch (...){
        return false;
    }
}

template<class K, class T>
void HashMap<K, T>::remove(K clave) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx] == nullptr || tabla[idx]->getClave() != clave) {
        throw 404;
    }
    delete tabla[idx];
    tabla[idx] = nullptr;
}

template<class K, class T>
bool HashMap<K, T>::esVacio() {
    for (int i = 0; i < tamanio; ++i) {
        if (tabla[i] != nullptr)
            return false;
    }
    return true;
}

template<class K, class T>
unsigned int HashMap<K, T>::hashFunc(K clave) {
    //Nuestra funcion hash??
    return clave;
}

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k, unsigned int (*fp)(K)) {
    tabla = new ArbolBinarioAVL <K, T> *[k];
    tamanio = k;
    hashFuncP = fp;
    for (int i = 0; i < tamanio; ++i) {
        tabla[i] = nullptr;
    }
}

template<class K, class T>
void HashMap<K, T>::print() {
    for (int i = 0; i < tamanio; ++i) {

        std::cout << i << "\t";
        if (tabla[i] != nullptr)
            std::cout << tabla[i]->getDato();

        std::cout << std::endl;

    }
}


#endif //HASHMAP_H