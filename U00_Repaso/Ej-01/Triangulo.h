#ifndef REPASO_TRIANGULO_H
#define REPASO_TRIANGULO_H

#include "Geometria.h"

template <class T>

class Triangulo:public Geometria {

private:
    float angulo;
public:
    Triangulo(T al, T an, T c, float alfa):Geometria(al,an,c){angulo=alfa;}

    float getangulo(){
        return angulo;
    };

    virtual void superficie(){
        sup=0;
        sup=(getalto()*getancho()/2);
    }

    virtual void perimetro(){
        per=0;
        per=
    }

};


#endif //REPASO_TRIANGULO_H
