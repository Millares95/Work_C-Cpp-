#include <stdio.h> /* El valor que se obtien es el residuo en cada uno de los casos que no es lo que queda de la divsion es el resto de la divison despues que se pasa el valor entero*/

int main()
{
    int dividend, divisor, remainder;
    dividend = 17;
    divisor = 5;
    remainder = dividend / divisor;
    printf("El valor de la variable es %d\n", remainder);
    return 0;
}