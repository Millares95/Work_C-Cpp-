/*Sumando con for*/
#include <stdio.h>
main()
{
    int sum = 0, number;
    for (number = 2; number <= 100; number += 2)
    {
        sum += number;
    }
    printf("The sum of 2 to 100 is:\n%d", sum);
    getchar();
    getchar();
    return 0;
}