/*
//2.1
#include <stdio.h>
main()
{
    int a = 67
    int b = 33
    int c = a + b + 7
    printf("a+b+7=%d\n", c);
    return 0;
}
*/
/*
//2.2
#include <stdio.h>
main()
{
    int a = 8
    int b = 7
    int c =a + 5 * b;
    printf("c=%d\n" , c);
}
*/
/*
//3
#include <stdio.h>
#include <string.h>

#define PRAISE "О, яке чудове ім'я!"

int main() {
    char name [50];
    printf("Як вас звати?\n");
    scanf("%s", name);
    printf("Привіт, %s. %s\n", name, PRAISE);
    printf("Ваше ім'я складається з %lu літер i", strlen(name));
    printf("займає %lu комірок пам'яті.\n", sizeof(name));  
    printf("Вітальна фраза складається з %lu літер", strlen (PRAISE));
    printf("і займає %lu комірок пам'яті.\n", sizeof (PRAISE));
}
*/