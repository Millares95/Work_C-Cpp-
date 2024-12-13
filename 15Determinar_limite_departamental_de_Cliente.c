#include <stdio.h>

int main()
{
    int numer_cuenta = 0;
    float saldo_primer_mes, limite_permitido, saldo_actual, cargo, credito;

    while (1)
    {
        printf("Introduzca el numero de cuenta (-1 para terminar): ");
        scanf("%d", &numer_cuenta);
        if (numer_cuenta != -1)
        {
            printf("Introduzca el saldo inicial: ");
            scanf("%f", &saldo_primer_mes);
            printf("Introduzca el total de cargos: ");
            scanf("%f", &cargo);
            printf("Introduzca el total de creditos: ");
            scanf("%f", &credito);
            printf("Introduzca el limite de credito: ");
            scanf("%f", &limite_permitido);
            printf("\t\t\n");
            saldo_actual = saldo_primer_mes + cargo - credito;

            printf("El numero de cuenta es %d\n", numer_cuenta);
            printf("El limite de credito es %.2f\n", limite_permitido);
            printf("El nuevo saldo es: %.2f\n", saldo_actual);

            if (saldo_actual > limite_permitido)
            {
                printf("Se excedio el limite de credito\n");
            }
        }
        if (numer_cuenta == -1)
        {
            printf("El valor no corresponde a un numero de cuenta\n");
            getchar();
            getchar();
            break;
        }
    }
    return 0;
}
