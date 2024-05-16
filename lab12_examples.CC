/*
//2.1
#include <stdio.h>

int main(void)
{
    int x;
    for (x = 1; x <= 100; x++)
    {
        printf("%d ", x);
    }
    return 0;
}
*/
/*
//2.2
#include <stdio.h>

int main() 
{
    int i = 2;
    while (i <= 1024) 
    {
        i = i * 2;
        printf("%d\n", i);
    }
    return 0;
}
*/
/*
//2.3
#include <stdio.h>

int main() 
{
    int j = 0, k = 0;
    while (j < 5) 
    {
        k += 10;
        j++;
    }
    printf("k=%d\n", k);
    return 0;
}

*/
/*
//2.5
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int magic;
    int guess;
    magic = rand();
    
    printf("vhaday chyslo:");
    scanf("%d", &guess);
    
    if(guess != magic) 
    {
        printf("virno\n");
        printf("magichne chyslo rivne %d", magic);
    }
    else 
    {
        printf("nevirno\n");
        while (guess != magic)
        {
            printf("vhaday chyslo:");
            scanf("%d", &guess);
            printf("nevirno\n");
        }
    }
    return 0;
}
*/
/*
//2.6
#include<stdio.h>
#include<stdlib.h>

int main(void) { 
    int magic; 
    int guess; 
    int m = 1;
    
    magic = rand();
    printf("vgaday chuslo:"); 
    scanf("%d",&guess); 
    
    if(guess != magic) { 
        printf("virno"); 
        printf("magichne chuslo rivne %d",magic); 
    }
    else { 
        printf("nevirno\n"); 
        printf("m=%d\n", m); 
        
        while (guess != magic) { 
            m++; 
            printf("vgaday chuslo:"); 
            scanf("%d",&guess); 
            printf("nevirno\n"); 
            printf("m=%d\n",m);
        }
    }
    return 0;
}

*/
/*
/2.7
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int magic;
    int guess;
    int m = 1; 
    magic = rand();

    printf("vgaday chuslo:");
    scanf("%d", &guess);

    if(guess - magic)
    {
        printf("virno");
        printf("magichne chuslo rivne %d", magic);
    }
    else
        printf("nevirno\n");
    printf("m=%d\n", m);

    while (guess != magic)
    {
        m++;
        printf("vgaday chuslo:");
        scanf("%d", &guess);
        printf("nevirno\n");
        printf("m=%d\n", m);
        if(m > 9)
        {
            printf("magic-%d\n", magic);
            break;
        }
    }
}

*/
