#include "../Cola/Cola.h"


class ColaPrioridad {

private:
    Cola<int> *colas;
    int tamanio;

public:

    ColaPrioridad(int cant) {
        tamanio = cant;
        colas = new Cola<int>[cant];
    }

    void encolar(int d, int prioridad) {
        if (prioridad >= 0 && prioridad < tamanio)
            colas[prioridad].encolar(d);
        else

            throw 404;
    }


    int desencolar() {

        for (int i = 0; i < tamanio; i++) {
            if (!colas[i].esVacia())
                return colas[i].desencolar();
        }

        throw 404;
    }

};