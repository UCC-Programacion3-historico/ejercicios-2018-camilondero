#include <iostream>
using namespace std;

void intercambiar(int &x, int &y){
    int aux=x;
    x=y;
    y=aux;
}

void  mostrarArray ( int a[], int nro){

    cout << " Elementos del Array Ordenados " << endl;

    for ( int i = 0 ; i <nro; i ++)
    {
        cout << a [i] << endl;
    }


}

void QuickSort (int a[], int primero, int ultimo){

    int i=0, j=0, central;
    int pivote;

    central= (primero+ultimo)/2;
    pivote= a[central];
    i=primero;
    j=ultimo;

    do{
        while(a[i]<pivote) i++;
        while(a[j]>pivote)j++;

        if(i <= j){
            intercambiar(a[i], a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(primero<j)
        QuickSort(a,primero,j);
    if(i<ultimo)
        QuickSort(a,i,ultimo);
}

int main(){


    int v[100];

    for (int i = 0; i <5 ; ++i) {

        cout<<" Ingrese valor = "<<endl;
        cin>>v[i];

    }

    QuickSort(v,0,5);
    mostrarArray(v,5);

}

