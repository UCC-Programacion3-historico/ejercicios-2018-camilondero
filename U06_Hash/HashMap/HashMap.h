#ifndef HASHMAP_H
#define HASHMAP_H

#include "HashEntry.h"
#include <map>

template<class K, class T>
class HashMap {
private:
    static unsigned int hashFunc(K clave);

    unsigned int (*hashFuncP)(K clave);

    std::map<K, T> **tabla;
    unsigned int tamanio;


public:
    HashMap(unsigned int k);

    HashMap(unsigned int k, unsigned int (*hashFuncP)(K clave));

    T get(K clave);

    void put(K clave, T valor);

    void remove(K clave);

    ~HashMap();

    bool esVacio();

    void print();

};

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k) {
    tamanio = k;
    hashFuncP = hashFunc;
    for (int i = 0; i < tamanio; ++i) {
        tabla[i] = new std::map<K, T>;
    }
}

template<class K, class T>
HashMap<K, T>::~HashMap() {

}

template<class K, class T>
T HashMap<K, T>::get(K clave) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    auto it = tabla[idx]->find(clave);
    if (it == tabla[idx]->end()) {
        throw 404;
    }
    return it->second;
}

template<class K, class T>
void HashMap<K, T>::put(K clave, T valor) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    if (tabla[idx]->find(clave) == tabla[idx]->end())
        tabla[idx]->insert(make_pair(clave, valor));
    else
        throw 404;
}

template<class K, class T>
void HashMap<K, T>::remove(K clave) {
    unsigned int idx;
    idx = hashFuncP(clave) % tamanio;
    auto it = tabla[idx]->find(clave);
    if (it == tabla[idx]->end()) {
        throw 404;
    }
    tabla[idx]->erase(it);
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
    return clave;
}

template<class K, class T>
HashMap<K, T>::HashMap(unsigned int k, unsigned int (*fp)(K)) {
    tamanio = k;
    hashFuncP = fp;
    for (int i = 0; i < tamanio; ++i) {
        tabla[i] = new std::map<K, T>;
    }

}
//
//template<class K, class T>
//void HashMap<K, T>::print() {
//    for (int i = 0; i < tamanio; ++i) {
//
//        std::cout << i << "\t";
//        if (tabla[i] != nullptr)
//            std::cout << tabla[i]->getDato();
//
//        std::cout << std::endl;
//
//    }
//}


#endif //HASHMAP_H