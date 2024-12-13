/*Ejercicio*/
#include <stdio.h>
int main()
{
    int x = 1, total = 0, y;
    while (x <= 10)
    {
        y = x * x;
        printf("%d\n", y);
        total = total + y;
    }
    printf("La suma de los cuadrados es %d\n", total);
    getchar();
    getchar();
    return 0;
}