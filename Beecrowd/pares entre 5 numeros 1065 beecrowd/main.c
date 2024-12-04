#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valores, cont=0;
    for (int i=0; i<=4; i++) {
        scanf("%d", &valores);
        if (valores%2==0) {
            cont=cont+1;
        }
    }
    printf("%d valores pares\n", cont);
    return 0;
}
