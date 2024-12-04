#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, cont=1, p;
    scanf("%d", &x);

        for (int i=x; i<x+12; i++)
        {
            if (cont<=6){
            if (i%2>0){
            printf("%d\n", i);
            cont++;
            }
        }
    }

    return 0;
}
