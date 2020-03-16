#include "../Lista/Lista.h"

#ifndef FNINVIERTE_H
#define FNINVIERTE_H

/* Ejercicio N°1.
Implementar la función fnInvierte(lista). Esta función invertirá el orden original de los
elementos en la lista, de tal forma que el último elemento será ahora el primero, el penúltimo
será el segundo, y así hasta que el primero sea el último. Considere que la lista no está
vacía y que no se construira una nueva, sólo se invertirá el orden de los elementos de la
lista original.*/

<<<<<<< HEAD

void fnInvierte (Lista<int> &lis){

    int t= lis.getTamanio();

    for(int i=0; i<t;i++)
    {
        lis.insertar(i,lis.getDato(t-1));
        lis.remover(t);

=======
template<class T>
void fnInvierte(Lista<T> *lis);


template<class T>
void fnInvierte(Lista<T> *lis) {
    T aux, aux2;
    int tam = lis->getTamanio();

    for (int i = 0; i < tam / 2; ++i) {
        aux = lis->getDato(i);
        aux2 = lis->getDato(tam - 1 - i);
        lis->reemplazar(i,aux2);
        lis->reemplazar(tam - 1 - i,aux);
>>>>>>> 667512902bd8e0d182aa525825d39ef02208e09a
    }

}


#endif //FNINVIERTE_H
