/*
//1
#include <stdio.h>
#include <conio.h>

int main() {
    printf("Числа типу int займають %d байт.\n", sizeof(int));
    printf("Числа типу char займають %d байт.\n", sizeof(char));
    printf("Числа типу float займають %d байт.\n", sizeof(float));
    printf("Числа типу double займають %d байт.\n", sizeof(double));
    getch();
    return 0;
}
*/
/*
//2
#include <stdio.h>

int main() {
    int n = 1 ;

    printf ("n=%d \n", n) ;
    printf("prefix: ++n=%d\n", ++n);
    printf("postfix: n++=%d\n", n++);
    printf("after-postfix: n=%d\n", n);
    printf("prefix: --n=%d\n", --n);
    printf("postfix: n--=%d\n", n--);
    printf("after-postfix: n =%d\n", n);

return 0;

}
*/

/*
//3.2
#include <stdio.h>

int main() {
    int n = 1 , m = 1 , res1, res2;

    res2 = m-- * n;
    printf("res2=%d", res2);
    return 0;
}
*/
/*
//4.1
#include <stdio.h>
#include <conio.h>

int main() {
    int a, b = 3
    float c;

    c = b % 2 + (a = ++b / 2) + 1.1;

    printf("a=%d, c=%4.1f\n", a, c);
    return 0;
}
*/
/*
//4.2
#include <stdio.h>

int main() {
    int x = 2, z;
    float y = 2.1;

    z = x++ * y + y / x * 3;

    printf("x=%d z=%d\n", x, z);

    return 0;

}
*/
/*
//4.3
#include <stdio.h>

int main() {
    float x = 1.1 , y = 0 , z;
    int a;

    z = (a = x++) * y + 3x ;

    printf("z=%4.1f\n", z);

    return 0;
}
*/