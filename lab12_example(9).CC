#include <stdio.h>
#include <math.h>

int main(void) {
    int i;
    double precision;
    double a;

    printf("Використання циклу for:\n");
    precision = 1.0;
    for (i = 0; (precision / 2.0 + 1.0) > 1.0; i++) {
        precision = precision / 2.0;
    }
    printf("Кількість ділень на 2: %6d\n", i);
    printf("Машинний нуль для float: %e\n", precision);

    printf("\nВикористання циклу while:\n");
    precision = 1.0;
    i = 0;
    while ((precision / 2.0 + 1.0) > 1.0) {
        precision = precision / 2.0;
        i++;
    }
    printf("Кількість ділень на 2: %6d\n", i);
    printf("Машинний нуль для float: %e\n", precision);

    printf("\nВикористання циклу do-while:\n");
    precision = 1.0;
    i = 0;
    do {
        precision = precision / 2.0;
        i++;
    } while ((precision / 2.0 + 1.0) > 1.0);
    printf("Кількість ділень на 2: %6d\n", i);
    printf("Машинний нуль для float: %e\n", precision);

    printf("\nДля типу double:\n");
    double precision_double;
    precision_double = 1.0;
    i = 0;
    while ((precision_double / 2.0 + 1.0) > 1.0) {
        precision_double = precision_double / 2.0;
        i++;
    }
    printf("Кількість ділень на 2: %6d\n", i);
    printf("Машинний нуль для double: %le\n", precision_double);

    printf("\nДля типу long double:\n");
    long double precision_long_double;
    precision_long_double = 1.0;
    i = 0;
    while ((precision_long_double / 2.0 + 1.0) > 1.0) {
        precision_long_double = precision_long_double / 2.0;
        i++;
    }
    printf("Кількість ділень на 2: %6d\n", i);
    printf("Машинний нуль для long double: %Le\n", precision_long_double);

    return 0;
}
