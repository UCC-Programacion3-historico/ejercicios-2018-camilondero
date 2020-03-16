/*Implemente una función recursiva que, teniendo un array ingresado por teclado, me
devuelva la suma de todos sus elementos*/

#include "sumatoria.h"
#include<iostream>

using namespace std;

int sumatoria( int *arr,unsigned int size){

    if(size-1 == 0){
        return arr[0];
    }

    else
        return arr[size-1] + sumatoria(arr,size-1);
}