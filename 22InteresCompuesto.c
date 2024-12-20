/*calculating compound interest*/
#include <stdio.h>
#include <math.h>
main()
{
    int year;
    double amount, principal = 1000.0, rate = .05;
    printf("%4s%21s\n", "Year", "Amount on deposit");
    for (year = 1; year <= 10; year++)
    {
        amount = principal * pow(1 + rate, year);
        printf("%4d%21.2f\n", year, amount);
    }
    getchar();
    getchar();
    return 0;
}