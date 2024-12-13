/*Este programa calcula el producto de dos enteros */
#include <stdio.h>
int main()
{
    int x, y, z, result;
    printf("Introduzca tres enteros: ");
    scanf("%d%d%d", &x, &y, &z);
    result = x * y * z;
    printf("El producto es %d\n", result);
    getchar(); // Consume el salto de línea de scanf
    getchar(); // Espera una entrada del usuario
    return 0;
}