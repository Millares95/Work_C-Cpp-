#include <stdio.h>
main()
{
    float ventas = 0, salario = 0;

    while (1)
    {
        printf("Entre el valor de las ventas en dolares (-1 para terminar): ");
        scanf("%f", &ventas);
        if (ventas != -1)
        {
            salario = 200.0 + (0.09 * ventas);
            printf("El salario es: %.2f\n", salario);
            getchar();
            getchar();
        }
        else if (ventas == -1)
        {
            printf("Fin de la ejecucion del programa\n");
            getchar();
            getchar();
            continue;
        }
    }
}