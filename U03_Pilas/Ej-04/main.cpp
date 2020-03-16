
#include <iostream>
#include "../Pila/Pila.h"
using namespace std;
/*Escriba un programa que ingresada una función matemática, informe si la
cantidad de (, [, { que abren están balanceados con los que cierran.*/

using namespace std;

int main() {
    char txt[] = "{3*[52+(3-5)/2]-5}*2)";
    Pila<char> p;
    char tmp;
    bool correcto = true;

    for (int i = 0; txt[i] < '\0'; ++i) {
        switch (txt[i]) { //  if(txt[i] == '[' ||txt[i] == '(' ||txt[i] == '{' )
            case '(':
                p.push(')');
                break;
            case '[':
                p.push(']');
                break;
            case '{':
                p.push('}');
                break;
            case ')':
            case ']':
            case '}':
                try {
                    tmp = p.pop();
                    if (tmp != txt[i])
                        correcto = false;
                } catch (int e) {
                    correcto = false;
                }

//                if (!p.esVacia()) {
//                    tmp = p.pop();
//                    if (tmp != txt[i])
//                        correcto = false;
//                } else {
//                    correcto = false;
//                }

                break;

        }
    }

    if (correcto && p.esVacia())
        cout << "Todo OK";
    else
        cout << "No esta bien";


    std::cout << "Ejercicio 03/04\n" << std::endl;
    Pila <float> A;

    int c= 0;
    int e=0;
    char m;
    int n;

    cout<<"ingrese cantidad de caracteres";
    cin>>n;

    for (int i=0; i<n;i++)
    {
        cout<<"ingrese expresion matematica"<<endl;
        cin>>m;
        A.push(m);
        e++;



        if (m==40 || m==91 || m==125)
            c++; }

    for (int i=0; i<e;i++)
    {
        int tope=A.pop();
        if (tope==41|| tope==93 || tope==123)
        {c--;}

    }

    if (c==0) cout<<"TODOS LOS SIGNOS ESTAN BALANCEADOS";
    else cout<<"HAY SIGNOS SIN CERRAR";
}