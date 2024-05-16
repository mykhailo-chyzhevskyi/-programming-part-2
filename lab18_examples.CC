/*
//2.1
#include <stdio.h>

int main(void) {
    struct my_struct { 
        int a;
        int b;
    } x, y;

    x.a = 10;
    y = x; 

    printf("%d", y.a);

    return 0;
}

*/
/*
//2.2
#include <stdio.h>

struct student {
    char name[30];
    int kurs;
    int age;
};
#include <stdio.h>

struct student {
    char name[30];
    int kurs;
    int age;
};

int main() {
    struct student stud1;

    printf("Vvedit imya:");
    fgets(stud1.name, sizeof(stud1.name), stdin); 
    
    printf("Vvedit vik:");
    scanf("%d", &stud1.age);
    printf("Vvedit kyrs:");
    scanf("%d", &stud1.kurs);
    
    printf("Student %s\n", stud1.name);
    printf("Kyrs %d\n", stud1.kurs);
    printf("Vik %d\n", stud1.age);

    return 0;
}

*/
/*
//2.3
#include <stdio.h>

struct student {
    char name[30];
    int kurs;
    int age;
};

int main() {
    struct student stud[10];
    int i, n;
    
    printf("Kilkist studentiv: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Vvedit imya: ");
        scanf("%s", stud[i].name);
        
        printf("Vvedit vik: ");
        scanf("%d", &stud[i].age);
        
        printf("Vvedit kurs: ");
        scanf("%d", &stud[i].kurs);
    }

    for(i = 0; i < n; i++) {
        printf("Student %s\n", stud[i].name);
        printf("Kurs %d\n", stud[i].kurs);
        printf("Vik %d\n", stud[i].age);
    }

    return 0;
}

*/
/*
//3
#include <stdio.h>

struct Employee {
    char name[50];
    float weight;
    float height;
    int age;
};

int main() {
    struct Employee emp;

    printf("Введіть ім'я працівника: ");
    scanf("%s", emp.name);
    
    printf("Введіть вагу працівника: ");
    scanf("%f", &emp.weight);
    
    printf("Введіть висоту працівника: ");
    scanf("%f", &emp.height);
    
    printf("Введіть вік працівника: ");
    scanf("%d", &emp.age);

    printf("\nІнформація про працівника\n");
    printf("Ім'я: %s\n", emp.name);
    printf("----------------------------------------\n");
    printf("Вага: %.2f\n", emp.weight);
    printf("Висота: %.2f\n", emp.height);
    printf("Вік: %d\n", emp.age);

    return 0;
}

*/