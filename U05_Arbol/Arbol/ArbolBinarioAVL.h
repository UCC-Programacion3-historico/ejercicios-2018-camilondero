#ifndef ARBOLBINARIO_H
#define ARBOLBINARIO_H

#include <stdexcept>
#include <iostream>
#include "NodoArbolAVL.h"
#include "../../U02_Listas/Lista/Lista.h"
//#include "ArbolOcurrencias.h"


using namespace std;

#include "NodoArbol.h"


template<class T>
class ArbolBinarioAVL {
private:


    NodoArbolAVL<T> *raiz;
    unsigned int tamanio;
    NodoArbolAVL<T> *a;


public:

    ArbolBinarioAVL();

    NodoArbol<T> *raiz;
public:
    ArbolBinario();


    /**
     * Agrega un dato al árbol
     * @param clave Clave para agregar el dato
     * @param dato Dato a agregar
     */
    void put(T dato) {
        raiz = put(dato, raiz);

    }

    };


    /**
     * Busca un dato en el árbol. Si no esta el dato en el árbol
     * tira una excepción
     * @param clave Valor a buscar
     * @return el valor buscado
     */
    T search(T dato) {
        return search(dato, raiz);
    }

    void remove(T dato);

    void preorder();

    void inorder();

    void postorder();

    void Ocurrencias(int i);

    ~ArbolBinarioAVL();

    bool esVacio();

    void merge(int *arr, int right, int left);

    void merge1();

    void print();

    int gettamanio();

    void mostrar(int n);

    void creararreglo();

    int SumarHojas();

    int contarHastaNivel(int n);

    int NodosTotales();

    int CantNiveles();

    void VerNivel(int n);

    int numNoN(int n);

    int AlturaArbol();

    int chicoGrande();

private:

    NodoArbolAVL<T> *put(T dato, NodoArbolAVL<T> *r);

    T search(T dato, NodoArbolAVL<T> *r);

    void preorder(NodoArbolAVL<T> *r);

    void inorder(NodoArbolAVL<T> *r);

    void posorder(NodoArbolAVL<T> *r);

    void merge(NodoArbolAVL<T> *r, int *arr, int right, int left);

    void merge1(int *arr, int left, int right, int middle);

    void Ocurrencias(int i, NodoArbolAVL<T> *r);

    NodoArbolAVL<T> *remove(T dato, NodoArbolAVL<T> *r);

    NodoArbolAVL<T> *buscarMax(NodoArbolAVL<T> *r, bool *encontre);

    void mostrar(int n, NodoArbolAVL<T> *r);

    int SumarHojas(NodoArbolAVL<T> *r);

    int contarHastaNivel(NodoArbolAVL<T> *r, int n);

    int NodosTotales(NodoArbolAVL<T> *r);

    int CantNiveles(NodoArbolAVL<T> *r);

    void VerNivel(NodoArbolAVL<T> *r, int n);

    int numNoN(NodoArbolAVL<T> *r, int n);

    int AlturaArbol(NodoArbolAVL<T> *r);

    int chicoGrande(NodoArbolAVL<T> *r);

    int altura(NodoArbolAVL<T> *r) {

    ~ArbolBinario();

    bool esVacio();

    void print();

private:
    NodoArbol<T> *put(T dato, NodoArbol<T> *r);

    T search(T dato, NodoArbol<T> *r);

    void preorder(NodoArbol<T> *r);

    void inorder(NodoArbol<T> *r);

    void posorder(NodoArbol<T> *r);

    NodoArbol<T> *remove(T dato, NodoArbol<T> *r);

    NodoArbol<T> *buscarMax(NodoArbol<T> *r, bool *encontre);


    int altura(NodoArbol<T> *r) {

        if (r == nullptr)
            return -1;
        else
            return r->altura;
    }

    NodoArbolAVL<T> *rotarIzq(NodoArbolAVL<T> *k2) {
        NodoArbolAVL<T> *k1 = k2->izq;
        k2->izq = k1->der;
        k1->der = k2;

    NodoArbol<T> *rotarIzq(NodoArbol<T> *k2) {
        NodoArbol<T> *k1 = k2->izq;
        k2->izq =k1->der;
        k1->der =k2;

        k2->altura = max(altura(k2->izq), altura(k2->der)) + 1;
        k1->altura = max(altura(k1->izq), k2->altura) + 1;
        return k1;
    }



    NodoArbolAVL<T> *rotarDer(NodoArbolAVL<T> *k1) {
        NodoArbolAVL<T> *k2 = k1->der;
        k1->der = k2->izq;
        k2->izq = k1;

    NodoArbol<T> *rotarDer(NodoArbol<T> *k1) {
        NodoArbol<T> *k2 = k1->der;
        k1->der =k2->izq;
        k2->izq =k1;

        k1->altura = max(altura(k1->izq), altura(k1->der)) + 1;
        k2->altura = max(altura(k2->der), k1->altura) + 1;
        return k2;
    }


    NodoArbolAVL<T> *rotarDobleIzq(NodoArbolAVL<T> *k3) {
        k3->izq = rotarDer(k3->izq);
        return rotarIzq(k3);
    }

    NodoArbolAVL<T> *rotarDobleDer(NodoArbolAVL<T> *k1) {
        k1->der = rotarIzq(k1->der);

    NodoArbol<T> *rotarDobleIzq(NodoArbol<T> *k3) {
        k3->izq =rotarDer(k3->izq);
        return rotarIzq(k3);
    }

    NodoArbol<T> *rotarDobleDer(NodoArbol<T> *k1) {
        k1->der =rotarIzq(k1->der);

        return rotarDer(k1);
    }

    int max(int a, int b) {
        if (a > b)
            return a;
        else
            return b;
    }


    void print(bool esDerecho, const std::string &identacion, NodoArbolAVL<T> *r);


    void print(bool esDerecho, const std::string& identacion, NodoArbol<T> *r);

};


/**
 * Constructor del Arbol
 * @tparam K Clave por la cual va a ordenar el árbol
 * @tparam T Valor guardado por el árbol
 */
template<class T>

ArbolBinarioAVL<T>::ArbolBinarioAVL() {
    tamanio = 0;

ArbolBinario<T>::ArbolBinario() {

    raiz = nullptr;
}


/**
 * Destructor del Arbol
 */
template<class T>

ArbolBinarioAVL<T>::~ArbolBinarioAVL() {
    //TODO: hacer destructor
}

/*template <class T>
void ArbolBinarioAVL<T>::merge(int *arr, int right, int left) {
    merge(*a, right, left);
}*/

ArbolBinario<T>::~ArbolBinario() {
    //TODO: hacer destructor
}



/**
 * Busca un dato en el árbol. Si no esta el dato en el árbol
 * tira una excepción
 * @param clave Valor a buscar
 * @return el valor buscado
 */


/**
 * Agrega un dato al árbol
 * @param clave Clave para agregar el dato
 * @param dato Dato a agregar
 */



/**
 * Elimina un dato del árbol
 * @param clave Clave para identificar el nodo a borrar
 */
template<class T>

void ArbolBinarioAVL<T>::remove(T dato) {
    raiz = remove(dato, raiz);
}

template<class T>
void ArbolBinarioAVL<T>::merge1() {
    int middle;
    merge1(a, right, left, middle);
}

void ArbolBinario<T>::remove(T dato) {
    raiz = remove(dato, raiz);
}


/**
 * Informa si un árbol esta vacío
 * @return
 */
template<class T>
<<<<<<< HEAD
bool ArbolBinarioAVL<T>::esVacio() {

bool ArbolBinario<T>::esVacio() {

    return raiz == nullptr;
}


/**
 * Recorre un árbol en preorden
 */
template<class T>

void ArbolBinarioAVL<T>::preorder() {

void ArbolBinario<T>::preorder() {

    preorder(raiz);
}


/**
 * Recorre un árbol en orden
 */
template<class T>

void ArbolBinarioAVL<T>::inorder() {

void ArbolBinario<T>::inorder() {

    inorder(raiz);
}


/**
 * Recorre un árbol en postorden
 */
template<class T>

void ArbolBinarioAVL<T>::postorder() {

void ArbolBinario<T>::postorder() {

    postorder(raiz);
}


/**
 * Muestra un árbol por consola
 */
template<class T>

void ArbolBinarioAVL<T>::print() {

void ArbolBinario<T>::print() {

    print(true, "", raiz);
}

template<class T>

int ArbolBinarioAVL<T>::NodosTotales() {
    NodosTotales(raiz);
}

template<class T>
int ArbolBinarioAVL<T>::SumarHojas() {

    SumarHojas(raiz);
}

template<class T>
int ArbolBinarioAVL<T>::contarHastaNivel(int n) {

    contarHastaNivel(raiz, n);
}

template<class T>
int ArbolBinarioAVL<T>::CantNiveles() {

    CantNiveles(raiz);
}

template<class T>
void ArbolBinarioAVL<T>::VerNivel(int n) {

    VerNivel(raiz, n);
}

template<class T>
int ArbolBinarioAVL<T>::numNoN(int n) {

    numNoN(raiz, n);
}

template<class T>
int ArbolBinarioAVL<T>::AlturaArbol(){

    AlturaArbol(raiz);
}
template<class T>
int ArbolBinarioAVL<T>::chicoGrande(){
    chicoGrande(raiz);
}

template<class T>
NodoArbolAVL<T> *ArbolBinarioAVL<T>::put(T dato, NodoArbolAVL<T> *r) {

    if (r == nullptr) {
        tamanio++;
        return new NodoArbolAVL<T>(dato);
    }

    if (dato < r->dato) {
        r->izq = put(dato, r->izq);

NodoArbol<T> *ArbolBinario<T>::put(T dato, NodoArbol<T> *r) {

    if (r == nullptr) {
        return new NodoArbol<T>(dato);
    }


    if (dato < r->dato) {
        r->izq =put(dato, r->izq);

        if (altura(r->izq) - altura(r->der) == 2) {
            if (dato < r->izq->dato)
                r = rotarIzq(r);
            else
                r = rotarDobleIzq(r);
        }
    } else if (dato > r->dato) {

        r->der = put(dato, r->der);

        r->der =put(dato, r->der);

        if (altura(r->der) - altura(r->izq) == 2) {
            if (dato > r->der->dato)
                r = rotarDer(r);
            else
                r = rotarDobleDer(r);
        }

    } else {
        r->ocurrencia++;

    }


    } else { // Son iguales

        throw 404;
    }

    if (altura(r->izq) > altura(r->der))
        r->altura = altura(r->izq) + 1;
    else
        r->altura = altura(r->der) + 1;


}


template<class T>
T ArbolBinarioAVL<T>::search(T dato, NodoArbolAVL<T> *r) {
=======
    return r;
}

template<class T>
T ArbolBinario<T>::search(T dato, NodoArbol<T> *r) {

    if (r == nullptr) {
        throw std::out_of_range("Elemento no encontrado");
    }
    if (r->dato == dato)
        return r->dato;
    if (r->dato > dato)
        return search(dato, r->izq);
    else
        return search(dato, r->der);
}

template<class T>



void ArbolBinario<T>::preorder(NodoArbol<T> *r) {

    if (r == nullptr)
        return;

    std::cout << r->dato << " ";
    preorder(r->izq);
    preorder(r->der);


}

template<class T>
void ArbolBinarioAVL<T>::inorder(NodoArbolAVL<T> *r) {
    if (r == nullptr)
        return;
    inorder(r->izq);
    std::cout << (r->dato) << r->ocurrencia << '\n';
    inorder(r->der);

}

template<class T>
void ArbolBinarioAVL<T>::mostrar(int n, NodoArbolAVL<T> *r) {
    if (r == nullptr)
        return;

    int i = 0;
    if (n == 0) {
        inorder(r->izq);
        std::cout << (r->dato) << " " << r->ocurrencia << '\n';
        inorder(r->der);
    } else {
        if (n == 1) {
            inorder(r->izq);
        } else {
            inorder(r->der);
        }

    }


}


template<class T>
void ArbolBinarioAVL<T>::posorder(NodoArbolAVL<T> *r) {

}

template<class T>
void ArbolBinario<T>::inorder(NodoArbol<T> *r) {
    if (r == nullptr)
        return;

    inorder(r->izq);
    std::cout << *(r->dato) << '\n';
    inorder(r->der);
}

template<class T>
void ArbolBinario<T>::posorder(NodoArbol<T> *r) {

    if (r == nullptr)
        return;

    posorder(r->izq);
    posorder(r->der);
    std::cout << r->dato << " ";
}

template<class T>

NodoArbolAVL<T> *ArbolBinarioAVL<T>::remove(T dato, NodoArbolAVL<T> *r) {
    NodoArbolAVL<T> *aux;

NodoArbol<T> *ArbolBinario<T>::remove(T dato, NodoArbol<T> *r) {
    NodoArbol<T> *aux;

    if (r == nullptr) {
        throw 404;
    }
    if (r->dato == dato) {
        // Borrar nodo
        if (r->izq == nullptr && r->der == nullptr) {
            delete r;
            return nullptr;
        } else if (r->izq == nullptr && r->der != nullptr) {
            aux = r->der;
            delete r;
            return aux;
        } else if (r->izq != nullptr && r->der == nullptr) {
            aux = r->izq;
            delete r;
            return aux;
        } else if (r->izq != nullptr && r->der != nullptr) {
            bool enc;
            if (r->izq->der != nullptr) {
                aux = buscarMax(r->izq, &enc);

                aux->der = r->der;
                aux->izq = r->izq;
            } else {
                aux = r->izq;
                r->izq->der = r->der;

                aux->der =r->der;
                aux->izq =r->izq;
            } else {
                aux = r->izq;
                r->izq->der =r->der;

            }
            delete r;
            return aux;
        }
    } else if (r->dato > dato) {

        r->izq = remove(dato, r->izq);
    } else {
        r->der = remove(dato, r->der);

        r->izq =remove(dato, r->izq);
    } else {
        r->der =remove(dato, r->der);

    }
    return r;
}


template<class T>

NodoArbolAVL<T> *ArbolBinarioAVL<T>::buscarMax(NodoArbolAVL<T> *r, bool *encontre) {
    NodoArbolAVL<T> *ret;

NodoArbol<T> *ArbolBinario<T>::buscarMax(NodoArbol<T> *r, bool *encontre) {
    NodoArbol<T> *ret;

    *encontre = false;

    if (r->der == nullptr) {
        *encontre = true;
        return r;
    }

    ret = buscarMax(r->der, encontre);
    if (*encontre) {

        r->der = nullptr;

        r->der =nullptr;

        *encontre = false;
    }

    return ret;

}



template<class T>
void ArbolBinarioAVL<T>::print(bool esDerecho, const std::string &identacion, NodoArbolAVL<T> *r) {

template<class T>
void ArbolBinario<T>::print(bool esDerecho, const std::string& identacion, NodoArbol<T> *r) {

    if (r->der != nullptr) {
        print(true, identacion + (esDerecho ? "     " : "|    "), r->der);
    }
    std::cout << identacion;
    if (esDerecho) {
        std::cout << " /";
    } else {
        std::cout << " \\";
    }
    std::cout << "-- ";
    std::cout << r->dato << std::endl;
    if (r->izq != NULL) {
        print(false, identacion + (esDerecho ? "|    " : "     "), r->izq);
    }
}


template<class T>
void ArbolBinarioAVL<T>::Ocurrencias(int i, NodoArbolAVL<T> *r) {

    if (r == nullptr)
        return;
    Ocurrencias(i, r->izq);

    a[i].ocurrencia = r->ocurrencia;
    a[i].dato = r->dato;
    //cout<<r->dato<<" "<< r->ocurrencia<<endl;
    i++;
    Ocurrencias(i, r->der);

    merge(*a, 0, a->tamanio - 1);
    for (int i = 0; i < a->tamanio; i++) {
        cout << a[i] << "\t";

    }


}

template<class T>
void ArbolBinarioAVL<T>::Ocurrencias(int i) {
    Ocurrencias(i, raiz);
}

template<class T>
int ArbolBinarioAVL<T>::gettamanio() {
    return tamanio;
}

template<class T>
void ArbolBinarioAVL<T>::mostrar(int n) {
    mostrar(n);
}


template<class T>
void ArbolBinarioAVL<T>::creararreglo() {

    a = new NodoArbolAVL<T>[tamanio];

}

template<class T>
void ArbolBinarioAVL<T>::merge(int *arr, int right, int left) {

    int middle;
    if (a->tamanio == 0) { throw 404; }

    if (a->tamanio > 1) {
        left = 0;
        right = a->tamanio - 1;
        middle = (left + right) / 2;
        merge(a, left, right);
        merge(a, middle + 1, right);
        merge1(a, left, right, middle);
    }

}

void merge1(int *arr, int left, int right, int middle) {
    int i, j, k, c[50];
    i = left;
    k = left;
    j = middle + 1;

    while (i <= middle && j <= right) {
        if (arr[i] < arr[j]) {
            c[k] = arr[i];
            k++;
            i++;

        } else {
            c[k] = arr[j];
            k++;
            j++;
        }
    }
    while (i <= middle) {
        c[k] = arr[i];
        k++;
        i++;
    }
    while (j <= right) {
        c[k] = arr[j];
        k++;
        j++;
    }
    for (i = left; i < k; i++) {
        arr[i] = c[i];
    }


}

//Contar cuantos nodos hay en total en el arbol
template<class T>
int ArbolBinarioAVL<T>::NodosTotales(NodoArbolAVL<T> *r) {

    if (r != nullptr) {

        int izq = NodosTotales(r->izq);
        int der = NodosTotales(r->der);
        int centro = 1;

        return izq + der + centro;
    }

    return 0;
}

//Mostrar cuantos nodos hay en un nivel
template<class T>
int ArbolBinarioAVL<T>::contarHastaNivel(NodoArbolAVL<T> *r, int n) {

    if (r != nullptr) {
        if (n == 0) { return 1; }
        return contarHastaNivel(r->der, n - 1) + contarHastaNivel(r->izq, n - 1);

    }

    return 0;
}



//Sumar todas las hojas de un arbol

template<class T>
int ArbolBinarioAVL<T>::SumarHojas(NodoArbolAVL<T> *r) {
    if (r != nullptr) {

        int Centro = r->dato;
        int Izq = SumarHojas(r->izq);
        int Der = SumarHojas(r->der);
//NO ME CUENTA NI EL 3 NI EL 6
        if((r->dato%3) == 0)
        { return Izq + Der + Centro;}
    }

    return 0;
}

//cuenta cuantos niveles tiene un arbol

template<class T>
int ArbolBinarioAVL<T>::CantNiveles(NodoArbolAVL<T> *r) {

    if (r != nullptr) {
        int izq = CantNiveles(r->izq) + 1;
        int der = CantNiveles(r->der) + 1;

        if (izq > der)
            return izq;
        return der;
    }

    return -1;
}

//Mostrar cuales nodos estan en su nivel
template<class T>
void ArbolBinarioAVL<T>::VerNivel(NodoArbolAVL<T> *r, int n) {

    if (r != nullptr) {

        if (n == 0)
            cout << r->dato << " ";
        VerNivel(r->izq, n - 1);
        VerNivel(r->der, n - 1);

    }

}

//CONTAR NODOS DESDE UN NIVEL PARA ABAJO
template<class T>
int ArbolBinarioAVL<T>::numNoN(NodoArbolAVL<T> *r, int n) {

    if (r != nullptr) {

        if (n <= 0)// si se pone (n>=0) cuenta desde un nivel hacia arriba
            return numNoN(r->izq, n - 1) + numNoN(r->der, n - 1) + 1;
        return numNoN(r->izq, n - 1) + numNoN(r->der, n - 1);
    }
    return 0;
}

//Altura de un arbol binario
template<class T>

int ArbolBinarioAVL<T>::AlturaArbol(NodoArbolAVL<T> *r) {

    Lista<int> L;

    if (r == nullptr)
        return 0;
    else {

        int alturaIz = AlturaArbol(r->izq);

        int alturaDr = AlturaArbol(r->der);

        if (alturaIz > alturaDr)
        {
            return alturaIz + 1;}
    else
        {
            return alturaDr + 1;}

    }

}

//hay que arreglar para que muestre los dos valores

template<class T>
int ArbolBinarioAVL<T>::chicoGrande(NodoArbolAVL<T> *r) {

    int nivel = 0;
    int nivel2 = 0;

    if (r != nullptr) {

            int mayor = 0;
            int menor = tamanio;

            int izq = chicoGrande(r->izq) + 1;
            if (r->dato > mayor) {
                mayor = r->dato;
                nivel = izq;
            }
            if (r->dato < menor) {
                menor = r->dato;
                nivel2 = izq;
            }

            int der = chicoGrande(r->der) + 1;


            if (r->dato > mayor) {
                mayor = r->dato;
                nivel = der;
            }
            if (r->dato < menor) {
                menor = r->dato;
                nivel2 = izq;
            }

            return nivel2; //nivel del nodo mas alto
        }

    return -1;
}


#endif //HASHMAP_H