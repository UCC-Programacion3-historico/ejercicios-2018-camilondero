
#include <iostream>

using namespace std;


/*
ordenar un array de n elementos
utilizando el algoritmo de ordenación por selección
*/
void intercambiar(int& x, int& y)
{
    int aux = x;
    x = y;
    y = aux;
}
void ordSeleccion (int a[], int n)
{
    int indiceMenor, i, j;
// ordenar a[0]..a[n-2] y a[n-1] en cada pasada
    for (i = 0; i < n - 1; i++)
    {
// comienzo de la exploración en índice i
        indiceMenor = i;
// j explora la sublista a[i+1]..a[n-1]
        for (j = i + 1; j < n; j++)
            if (a[j] < a[indiceMenor])
                indiceMenor = j;
// sitúa el elemento mas pequeño en a[i]
        if (i != indiceMenor)

        intercambiar(a[i], a[indiceMenor]);
    }
}

void  mostrarArray ( int a[], int nro){

    cout << " Elementos del Array Ordenados " << endl;

    for ( int i = 0 ; i <nro; i ++)
    {
        cout << a [i] << endl;
    }


}

int main(){


    int v[100];

    for (int i = 0; i <5 ; ++i) {

        cout<<" Ingrese valor = "<<endl;
        cin>>v[i];

    }

    ordSeleccion(v,5);
    mostrarArray(v,5);

}



