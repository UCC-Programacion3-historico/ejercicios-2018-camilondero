#ifndef REPASO_CUADRADO_H
#define REPASO_CUADRADO_H
#include "Geometria.h"

template <class T>
class Cuadrado: public Geometria{

public:

    Cuadrado(T al, T an, T c):Geometria(al,an,c):{;}

    virtual void superficie(){
        T sup=0;
        sup=getalto()*getancho();
    };

    virtual void perimetro(){
        T per=0;
        per=2*getalto()+2* getancho();
    }

    T diagonal(){
        return sqrt(getancho()*getancho()+getalto()*getalto());
    };
};


#endif //REPASO_CUADRADO_H
