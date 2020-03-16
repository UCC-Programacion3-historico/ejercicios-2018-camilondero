
/*Diseñar una aplicación que permita:
Cargar en un array 30 números generados aleatoriamente entre 100 y 500.
Imprimir los números.
Crear un árbol binario de búsqueda con los datos del array. */

#include <iostream>

#include "../Arbol/ArbolBinario.h"
#include<stdlib.h>
#include <time.h>

int main() {
    
    ArbolBinario<int> arbol;
    
    int a[30];
    
    srand(time(NULL));
    
    for (int i = 0; i < 30 ; ++i) {
        
        a[i]=100+(rand()%(501-100));
        
        arbol.put(a[i]);
    }
    arbol.print();

#include <ostream>
#include <stdlib.h>

#include "../Arbol/ArbolBinario.h"
#include <string>

using namespace std;

class Persona {
public:
    string nombre;
    string apellido;
    int dni;

    Persona(){};

    Persona(string n, string a, int d) {
        nombre = n;
        apellido = a;
        dni = d;
    }

    bool operator==(Persona p) {
        return this->dni == p.dni;
    }

    bool operator>(Persona p) {
        return this->dni > p.dni;
    }


};

int main() {
    ArbolBinario<Persona> a;
    Persona b("Juan", "Perez", 123);
    Persona c("Pedro", "d", 234);
    Persona d("Ale", "e", 567);
    Persona e("Jose", "d", 21);
    Persona f("Maria", "s", 2344);
    Persona g("Juana", "w", 124);


    a.put(b);
    a.put(c);
    a.put(d);
    a.put(e);
    a.put(f);
    a.put(g);

   
    a.print();

    std::cout << "d 05/01\n" << std::endl;
    return 0;

}