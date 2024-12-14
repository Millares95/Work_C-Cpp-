/*Counter-controlled repetition*/
#include <stdio.h>
int main()
{
    int counter = 1;      // initialization
    while (counter <= 10) // repetition condition
    {
        printf("%d\n", counter); // display counter
        ++counter;               // increment
    } // end while
    getchar();
    getchar();
    return 0; // indicate that program ended successfully
}