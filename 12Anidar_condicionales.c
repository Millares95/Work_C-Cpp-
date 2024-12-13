/* Analisis para los resultados del examen */
#include <stdio.h>

int main()
{
    /*Inicializando la declaracion de variables */
    int aprobados = 0, reprobados = 0, estudiantes = 1, resultado;

    /*procesar 10 estudaintes, contar los procesos de loop  */
    while (estudiantes <= 10)
    {
        printf("Entre los resultados (1=aprobado, 2=reprobado): ");
        scanf("%d", &resultado);
        if (resultado == 1)
        {
            aprobados = aprobados + 1;
            estudiantes = estudiantes + 1;
        }
        else if (resultado == 2)
        {
            reprobados = reprobados + 1;
            estudiantes = estudiantes + 1;
        }
        else if (resultado != 1 && resultado != 2)
        {
            printf("Resultado invalido, intente de nuevo\n");
            continue;
        }
    }
    printf("Aprobados: %d\n", aprobados);
    printf("Reprobados: %d\n", reprobados);
    if (aprobados > 8)
    {
        printf("Bono para el instructor\n");
    }
    getchar();
    getchar();
    return 0;
}