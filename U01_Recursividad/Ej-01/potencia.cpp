/*Implemente una función para potencias enteras con recursividad.
Definición recursiva para elevar un número a una potencia: Un número elevado a la potencia
cero produce la unidad; la potencia de un número se obtiene multiplicándolo por sí mismo
elevando a la potencia menos uno.
*/
//Funciona bien
int potencia(unsigned int base,  unsigned int exponente){

    if(exponente == 0)
    {
        return 1;
    }

    else

        return base * potencia(base,exponente-1);


}