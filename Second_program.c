/*Additional program */
#include <stdio.h>
main()
{
    int integer1, integer2, sum;          /*declaration*/
    printf("Enter the first integer:\n"); /*prompt*/
    scanf("%d", &integer1);               /* read and integer*/
    printf("Enter second integer:\n");    /*prompt*/
    scanf("%d", &integer2);               /* read and integer*/
    sum = integer1 + integer2;            /* assignment for sum*/
    printf("Sum is %d\n", sum);           /*print sum*/
    return 0;
}