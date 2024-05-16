/*
//2.1
#include<stdio.h> 

int main(void) {
    int x = 99; 
    int *p1, *p2;

    p1 = &x;
    p2 = p1; 

    printf("Значення за адресою p1 та p2: %d %d\n", *p1, *p2);
    printf("Адреси вказівників p1 та p2: %p %p\n", (void*)p1, (void*)p2);

    return 0;
}
*/
/*
//2.2
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void push(int i);
int pop(void);

int stack[SIZE]; 
int *tos = stack; 
int *p1 = stack; 

int main(void) {
    int value;

    do {
        printf("Введіть значення: ");
        scanf("%d", &value);

        if(value != 0)
            push(value);
        else
            printf("Значення на вершині стеку: %d\n", pop());
    } while(value != -1);

    return 0;
}

void push(int i) {
    if(p1 == tos + SIZE) {
        printf("Переповнення стеку\n");
        exit(1);
    }

    *p1 = i;
    p1++;
}

int pop(void) {
    if(p1 == tos) {
        printf("Стек пустий\n");
        exit(1);
    }

    p1--;
    return *(p1);
}

*/
/*
//3
#include <stdio.h>
#define SIZE 5

int main() {
    int arr[SIZE];
    int *ptr = arr; 
    int sum = 0;

    printf("Введіть %d елементів масиву:\n", SIZE);

    for (int i = 0; i < SIZE; i++) {
        printf("Елемент %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < SIZE; i++) {
        sum += *(ptr + i); 
    }

    printf("Сума елементів масиву: %d\n", sum);

    return 0;
}
*/
//8
#include <stdio.h>

double findDifference(double array[], int size) {
    if (size < 1) {
        printf("Помилка: розмір масиву має бути більше 0\n");
        return 0.0;
    }

    return array[0] - array[size - 1];
}

int main() {
    double numbers[10] = {1.5, 2.7, 3.9, 4.2, 5.1, 6.3, 7.8, 8.6, 9.0, 10.4};
    int size = 10;
    
    double difference = findDifference(numbers, size);
    
    printf("Різниця першого і останнього елементів масиву: %.2f\n", difference);
    
    return 0;
}
