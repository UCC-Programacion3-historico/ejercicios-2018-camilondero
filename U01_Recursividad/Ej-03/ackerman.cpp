#include "ackerman.h"

/*Algoritmo de Ackerman -> Número de Combinaciones
Recursivamente, podemos definir el número de combinaciones de m objetos tomados de n,
denotado:
A(m , n)={
n+1 , si m=0;
A(m−1,1), si m > 0 y n=0;
A(m−1 , A(m , n−1)), si m > 0 y n > 0;
 */

unsigned int ackerman(unsigned int m, unsigned int n) {
    if (m == 0)
        return n + 1;
    if (m > 0 && n == 0)
        return ackerman(m - 1, 1);
    if (m > 0 && n > 00)
        return ackerman(m - 1, ackerman(m, n - 1));
}