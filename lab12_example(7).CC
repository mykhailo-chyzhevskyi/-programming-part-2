#include <stdio.h>
#include <math.h>

int main() {
    printf("  Число  |  Квадрат  |  Куб  |  Корінь 4\n");
    printf("-------------------------------------------\n");
    
    for (int i = 1; i <= 20; i++) {
        double square = pow(i, 2);
        double cube = pow(i, 3);
        double root_4 = pow(i, 0.25);
        
        printf("   %2d     |  %6.0f   | %5.0f |  %9.4f\n", i, square, cube, root_4);
    }
    
    return 0;
}
