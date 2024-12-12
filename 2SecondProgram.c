/*Adition program*/
#include <stdio.h>
int main()
{
    int integer1, integer2, sum;
    printf("Enter first integer\n");  // declaracion
    scanf("%d", &integer1);           // asignacion
    printf("Enter second integer\n"); // declaracion
    scanf("%d", &integer2);           // asignacion
    sum = integer1 + integer2;        // operacion
    printf("Sum is %d\n", sum);       // salida
}