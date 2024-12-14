/* Estimacion de la constante e */
#include <stdio.h>

int main()
{
    int n, i = 1;
    double e = 1.0, factorial = 1.0;

    printf("Ingrese el numero de terminos para calcular la constante e:\n");
    scanf("%d", &n);

    while (i <= n)
    {
        factorial *= i;
        e += 1.0 / factorial;
        i++;
    }

    printf("El valor aproximado de e es: %f\n", e);

    getchar();
    getchar();
    return 0;
}