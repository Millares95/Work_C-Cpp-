/*Counter-cpmtrolled repetition with the for structure */
#include <stdio.h>
int main()
{
    int counter;
    /*Initialization, repetition condition ,and increment
    are all included in the for structure header */
    for (counter = 1; counter <= 10; counter++)
        printf("%d\n", counter);
    getchar();
    getchar();
    return 0;
}
