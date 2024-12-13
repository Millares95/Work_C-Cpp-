/*Preincremento o posincremento*/
#include <stdio.h>
int main()
{
    int c;
    c = 5;
    printf("%d\n", c);   // Imprime 5
    printf("%d\n", c++); // Imprime 5 y luego incrementa c en 1
    printf("%d\n", c);   // Imprime 6
    printf("\t\n");
    c = 5;
    printf("%d\n", c);   // Imprime 5
    printf("%d\n", ++c); // Imprime 6 y luego incrementa c en 1
    printf("%d\n", c);   // Imprime 6
    getchar();
    getchar();
    return 0;
}