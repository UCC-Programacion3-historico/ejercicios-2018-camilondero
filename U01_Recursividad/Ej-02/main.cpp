#include <iostream>
#include "sumatoria.h"
using namespace std;

int main() {

    int *v,n;

    cout<<"ingrese tamanio del vector"<<endl;
    cin>>n;

    v=new int[n];

    for (int i = 0; i < n; i++) {
        cout<<"ingrese v["<<i<<"]= "<<endl;
        cin >> v[i]; }

    cout<<"el total de la sumatoria es :  "<<sumatoria(v,n);

}