/* this program is about product to three integers number */
#include <stdio.h>
main()
{
    int x, y, z, result;

    printf("Enter three integer : ");
    scanf("%d%d%d", &x, &y, &z);
    result = x * y * z;
    printf("The product is %d \n", result);
    return 0;
}