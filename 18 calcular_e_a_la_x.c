/* Estimacion de la constante e */
#include <stdio.h>

int main()
{

    double x, ex = 1.0, factorial = 1.0, i = 1, n = 10; // Initialize n with a value

    printf("Ingrese el valor de x para calcular e^x:\n");
    scanf("%lf", &x);

    ex = 1.0;
    factorial = 1.0;
    i = 1;

    while (i <= n)
    {
        factorial *= i;
        ex += power(x, i) / factorial;
        i++;
    }

    printf("El valor aproximado de e^x es: %f\n", ex);
    getchar();
    getchar();
    return 0;
} // end main