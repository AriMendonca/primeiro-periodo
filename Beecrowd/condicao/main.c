#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    scanf ("%d%d%d", &a, &b, &c);
    if ((a == 0)&&( b == 0)&&(c== 1)){
        printf ("C ganhou\n");// &&= e
    }
    else if ((a == 0)&&(b == 1)&& (c == 0)) {
        printf("B ganhou\n");
    }
    else if ((a == 1)&&(b == 0)&& (c == 0)) {
        printf("A ganhou\n");
    }
    else if ((a == 1)&&(b == 1)&& (c == 0)) {
        printf("C ganhou\n");
    }
    else if ((a == 1)&&(b == 0)&& (c == 1)) {
        printf("B ganhou\n");
    }
    else if ((a == 0)&&(b == 1)&& (c == 1)) {
        printf("A ganhou\n");
    }
    else {
            printf("*");
    }
    return 0;
}
