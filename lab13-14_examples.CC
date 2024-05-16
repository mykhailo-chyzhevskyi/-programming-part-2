/*
//2.1
#include<stdio.h>
#include<math.h>

double Geron(double a, double b, double c);

double Geron(double a, double b, double c) {
    double p; 

    p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double u, v, w;
    double s;

    printf("Введіть сторону трикутника: ");
    scanf("%lf %lf %lf", &u, &v, &w);

    s = Geron(u, v, w); 
    printf("Площа 1 трикутника: %lf\n", s);

    s = Geron(10.3, 8.1, 9.7); 
    printf("Площа 2 трикутника: %lf m^2\n", s);

    s = Geron(u + 10.3, v + w, w * 1.7); 
    printf("Площа 3 трикутника: %lf\n", s);

    return 0;
}
*/
/*
//2.2
#include<stdio.h>
#include<math.h>

double fract(int, int);
double factorial(int);

int main() {
    int m, n;
    double s;

    scanf("%d %d", &m, &n);

    s = fract(m + 1, n - 1);
    printf("%lf\n", s);

    return 0;
}

double fract(int x, int y) {
    double t;
    t = factorial(x + y) / (x * y);
    return t;
}

double factorial(int n) {
    int i;
    double p;
    p = 1;

    for(i = 1; i <= n; ++i) {
        p *= i;
    }

    return p;
}

*/
/*
//3
#include <stdio.h>

void printChars(char *str, int count) {
    for (int i = 0; i < count && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

int main() {
    char str[] = "Hello, World!";
    int count = 5;

    printf("Введений рядок: %s\n", str);
    printf("Кількість символів, які потрібно надрукувати: %d\n", count);
    printf("Перші %d символів рядка: ", count);
    
    printChars(str, count);
    printf("\n");

    return 0;
}
*/
