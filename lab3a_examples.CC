/*
//1
#include <stdio.h>

int main(void) {
    float var1, var2;
    
    printf("Введіть перше число (var1): ");
    scanf("%f", &var1);
    printf("Введіть друге число (var2): ");
    scanf("%f", &var2);

    printf("var1 > var2 дає %d\n", var1 > var2);
    printf("var1 < var2 дає %d\n", var1 < var2);
    printf("var1 == var2 дає %d\n", var1 == var2);
    printf("var1 >= var2 дає %d\n", var1 >= var2);
    printf("var1 <= var2 дає %d\n", var1 <= var2);
    printf("var1 != var2 дає %d\n", var1 != var2);
    printf("!var1 дає %d\n", !var1);
    printf("!var2 дає %d\n", !var2);
    printf("var1 || var2 дає %d\n", var1 || var2);
    printf("var1 && var2 дає %d\n", var1 && var2);
    
    return 0;
}
*/
/*
//2
#include <stdio.h> 

#define TRUE 1 
#define FALSE 0 

void main(void) { 
    float var1, var2; 
    printf("Введіть перше число (var1): "); 
    scanf("%f", &var1); 
    printf("Введіть друге число (var2): "); 
    scanf("%f", &var2); 
    printf("var1 > var2 це %s\n", var1 > var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("var1 < var2 це %s\n", var1 < var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("var1 == var2 це %s\n", var1 == var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("var1 >= var2 це %s\n", var1 >= var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("var1 <= var2 це %s\n", var1 <= var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("var1 != var2 це %s\n", var1 != var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("var1 || var2 це %s\n", var1 || var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("var1 && var2 це %s\n", var1 && var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("!var1 це %s\n", !var1 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
    printf("!var2 це %s\n", !var2 ? TRUE : FALSE ? "ІСТИНА" : "ХИБНІСТЬ"); 
}
*/
/*
//виправлення програми 8
#include <stdio.h>
#include <conio.h>

void main() {
    unsigned int x=2, y = 1, z=3, res;
    char chx = 0xAF;
    printf("%u\n", x & y | z); 
    x = y = z = 2;
    printf("%u\n", x | y & z); 
    x = 3;
    y = 0;
    z = 1;
    printf("x^y|~z=%u\n", x ^ y | ~z); 
    printf("3|0^~1=%u\n", x | y ^ ~z);
    x = 1;
    y = 2;
    z = 0;
    printf("1&2|0=%u\n", x & y | z); 
    printf("~1^2&0=%u\n", ~x ^ y & z); 
    printf("2|0&1=%u\n", y | z & x); 
    printf("2++&~0|~1=%u\n", y++ & ~z | ~x); 
    printf("~3|1&++0=%u\n", ~y | x & ++z); 
    x = 0xAF;
    printf("%X\n", x >> 4); 
    chx <<= 7;
    printf("0x=%X\n", chx); 
    getch();
}

*/

/*
// виправлення програми 9
#include <stdio.h>
#include <conio.h>

void main() {
    char x = 255, y = 0177;
    printf("%u\n", x & y); 
    x = '(tm)';
    y = 017;
    printf("%u\n", x & ~y); 
    y = 127;
    printf("%u\n", x & y); 
    y = 128;
    printf("%u\n", x | y); 
}
*/