/*
//1
#include <stdio.h>
#include <math.h>

int main() {
    int i;
    double y, max_y = -INFINITY, min_y = INFINITY;
    printf("Таблиця значень функції імпульсу Максвела:\n");
    printf(" i |   y\n");
    printf("-----------\n");
    for (i = 0; i <= 31; i++) {
        y = sin(2 * i * M_PI / 100);
        printf("%2d | %.4f\n", i, y);
        if (y > max_y) max_y = y;
        if (y < min_y) min_y = y;
    }
    printf("Найбільше значення: %.4f\n", max_y);
    printf("Найменше значення: %.4f\n", min_y);
    return 0;
}
*/
/*
//2
#include <stdio.h>

int main() {
    int iterations = 0;
    float precision = 1.0;
    while (1) {
        precision /= 2.0;
        float a = precision + 1.0;
        iterations++;
        if (a <= 1.0) break;
    }
    printf("Кількість ділень на 2: %d\n", iterations);
    printf("Машинний нуль (float): %.10e\n", precision);
    return 0;
}

*/
/*
//3
#include <stdio.h>

int main() {
    int row, col;
    printf("Прямокутний трикутник:\n");
    for (row = 1; row <= 10; row++) {
        for (col = 1; col <= row; col++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
*/
/*
//4
#include <stdio.h>
#include <math.h>

int main() {
    int N;
    double S = 0.0;

    printf("Введіть натуральне число N: ");
    scanf("%d", &N);

    for (int k = 1; k <= N; k++) {
        S += pow(-1, k + 1) / (k * (k + 1));
    }

    printf("Значення суми: %lf\n", S);

    return 0;
}

*/