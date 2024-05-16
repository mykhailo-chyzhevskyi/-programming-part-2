#include <stdio.h>

int main() {
    FILE *file;
    int numbers[8];
    int i;

    int num1 = 10, num2 = 20, num3 = 30, num4 = 40, num5 = 50, num6 = 60, num7 = 70, num8 = 80;

    file = fopen("numbers.txt", "w");
    fprintf(file, "%d %d %d %d %d %d %d %d", num1, num2, num3, num4, num5, num6, num7, num8);
    fclose(file);

    file = fopen("numbers.txt", "r");
    for (i = 0; i < 8; i++) {
        fscanf(file, "%d", &numbers[i]);
    }
    fclose(file);

    printf("Numbers from file:\n");
    for (i = 0; i < 8; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
