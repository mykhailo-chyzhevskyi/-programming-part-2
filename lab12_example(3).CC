#include <stdio.h>
#include <conio.h>

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("\n\nCelsius\tFahrenheit\n");

    while (fahr <= upper)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%6d\t%9d\n", fahr, celsius);
        fahr = fahr + step;
    }

    getch();
    return 0;
}
