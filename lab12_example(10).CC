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
