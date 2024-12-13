/*Class average program with sentinel-controlled repetition*/
#include <stdio.h>
main()
{
    float average; // new data type
    int counter, grade, total;

    /*initialization phase */
    total = 0;
    counter = 0;
    /*processing phase*/
    printf("Enter grade, -1 to end: ");
    scanf("%d", &grade);

    while (grade != -1 & (grade <= 100) & (grade >= 0))
    {
        total = total + grade;
        counter = counter + 1;
        printf("Enter grade, -1 to end: ");
        scanf("%d", &grade);
    }
    /*termination phase*/
    if (counter != 0)
    {
        average = (float)total / counter; // En este casos se utiliza el float para hacer flotante el valor de total y asi que
                                          // la division sea en flotante y no perder datos al calcular el promedio
        printf("Class average is %.2f\n", average);
    }
    else
        printf("No grades were entered\n");
    getchar(); // Consume el salto de línea de scanf
    getchar(); // Espera una entrada del usuario
    return 0;
}