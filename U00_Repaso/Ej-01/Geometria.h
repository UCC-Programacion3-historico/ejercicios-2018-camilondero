#ifndef REPASO_GEOMETRIA_H
#define REPASO_GEOMETRIA_H

template<class T>
class Geometria {
private:
    T alto;
    T ancho;
    T color;

public:

    Geometria(T al ,T an ,T c){
        alto=al;
        ancho=an;
        color=c;

    };

    virtual void superficie() = 0;

    virtual void perimetro() = 0;

    T getalto() {
        return alto;
    };

    T getancho() {
        return ancho;
    };

    T getcolor() {
        return color;
    };

    T getsuperficie() {
        return superficie();
    };

    T getperimetro() {
        return perimetro();

    };


};


#endif //REPASO_GEOMETRIA_H
