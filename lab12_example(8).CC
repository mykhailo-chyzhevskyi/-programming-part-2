#include <stdio.h>
#include <math.h>

#define N 32

int main() {
    printf("  i  |  y_i\n");
    printf("-------------\n");

    double max_val = -INFINITY;
    double min_val = INFINITY;

    for (int i = 0; i <= 31; i++) {
        double y_i = sin((2 * M_PI * i) / N);
        printf("%3d  |  %f\n", i, y_i);

        if (y_i > max_val) {
            max_val = y_i;
        }

        if (y_i < min_val) {
            min_val = y_i;
        }
    }

    printf("\nНайбільше значення: %f\n", max_val);
    printf("Найменше значення: %f\n", min_val);

    return 0;
}
