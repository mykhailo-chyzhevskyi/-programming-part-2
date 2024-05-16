#include <stdio.h>
#include <math.h>

int main() {
    double x, y_library, y_taylor, term, accuracy = 0.00001;
    int iterations = 0;

    printf("Введіть значення x (0 <= x <= π/2): ");
    scanf("%lf", &x);

    y_library = exp(x);

    y_taylor = 1.0; 
    term = 1.0; 
    while (fabs(term) > accuracy) {
        term *= x / (iterations + 1); 
        y_taylor += term; 
        iterations++; 
    }

    printf("Бібліотечне значення функції: %lf\n", y_library);
    printf("Значення функції за допомогою ряду Тейлора: %lf\n", y_taylor);
    printf("Кількість ітерацій: %d\n", iterations);

    return 0;
}
