#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    printf("Введіть перше число: ");
    scanf("%f", &num1);
    printf("Введіть друге число: ");
    scanf("%f", &num2);
    printf("Введіть знак операції (+, -, *, /): ");
    scanf(" %c", &operation);

    if (operation == '+') {
        printf("Результат: %.2f\n", num1 + num2);
    } else if (operation == '-') {
        printf("Результат: %.2f\n", num1 - num2);
    } else if (operation == '*') {
        printf("Результат: %.2f\n", num1 * num2);
    } else if (operation == '/') {
        if (num2 != 0) {
            printf("Результат: %.2f\n", num1 / num2);
        } else {
            printf("Помилка: ділення на нуль!\n");
        }
    } else {
        printf("Помилка: неправильний знак операції!\n");
    }

    return 0;
}