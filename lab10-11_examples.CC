/*
//2.1
// Магічне число 
#include <stdio.h> 
#include <stdlib.h> 
main()
{
    int magic; // магічне число  
    int guess; // спроба гравця  
    magic = rand(); // генерація магічного числа 
    printf("Vgaday magichne chuslo: "); 
    scanf("%d", &guess);
    if(guess == magic) printf("** Virno **"); 
    return 0;

}
*/

/*
// Магічне число 2

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chuslo: ");
    scanf("%d", &guess);
    if(guess == magic) printf("**Virno**");
    else printf("Nevirno");
    return 0;
}
*/
/* Магічне число 3*/

/*
// Магічне число 3
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magichne chuslo: "); 
    scanf("%d", &guess);

    if (guess == magic) { 
        printf(" Virno "); 
        printf("Magichne chuslo rivne %d\n", magic); 
    }
    else {
        printf("** Nevirno, ");
        if(guess > magic) printf("zanabto veluke\n");
                 // вкладений if 
        else printf("zanabto male\n");
    }
    return 0;
}
*/
/*
// Магічне число, програма 4

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int magic;
    int guess;
    magic = rand();
    printf("Vgaday magiche chyslo : "); 
    scanf("%d", &guess);

    if(guess == magic) {
        printf(" Virno  ");
        printf("Magichne chyslo rivne %d\n", magic);
    }
    else if(guess > magic)
        printf("Nevirno, zanabto veluke");
    else printf("Nevirno, zanabto male");

return 0;

}
*/
