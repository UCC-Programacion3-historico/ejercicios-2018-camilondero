#include "sumatoria.h"
#include<iostream>

using namespace std;


int sumatoria(int *arr, unsigned int size) {

    if(size==0)
    { return arr[0];}

    else

    return arr[size]+sumatoria(arr,size-1);
}