#include <stdio.h>
int main()
{
    int num1, num2, suma, prod, dif, cos, mod;
    printf("Entre 2 valores numericos para realizar las operaciones aritmeticas\n:");
    scanf("%d%d", &num1, &num2);
    suma = num1 + num2;
    printf("La suma de los valores es: %d\n", suma);
    prod = num1 * num2;
    printf("El producto de los valores es: %d\n", prod);
    dif = num1 - num2;
    printf("La diferencia de los valores es: %d\n", dif);
    cos = num1 / num2;
    printf("El cociente de los valores es: %d\n", cos);
    mod = num1 % num2;
    printf("El residuo de los valores es: %d\n", mod);
    getchar(); // Consume el salto de línea de scanf
    getchar(); // Espera una entrada del usuario
    return 0;
}