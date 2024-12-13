/*Class average program with counter-controlled repetition */
#include <stdio.h>
main()
{
    int counter, grade, total, average;
    /*initialice phase*/
    total = 0;
    counter = 1;
    /*processing phase*/
    while (counter <= 10)
    {
        printf("Enter grade: ");
        scanf("%d", &grade);
        total = total + grade;
        counter = counter + 1;
    }
    /*termination phase*/
    average = total / 10;
    printf("Class average is %d\n", average);
    getchar(); // Consume el salto de línea de scanf
    getchar(); // Espera una entrada del usuario
    return 0;  /* indicate program endend successfully*/
}