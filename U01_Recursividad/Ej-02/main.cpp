#include <iostream>
#include "sumatoria.h"
using namespace std;

int main() {

  int *arr;
  int n;

  cout<<"ingrese n"<<endl;
  cin>>n;

  arr= new int [n];

  for(int i=0; i< n; i++)
  {
      cout<<"Ingrese los valores en el vector"<<endl;
      cout<<"arr[ "<<i<<" ]=";
      cin>>arr[i];
  }

  cout<<sumatoria(arr,n);

}