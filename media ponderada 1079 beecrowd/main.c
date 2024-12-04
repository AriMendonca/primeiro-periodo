#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, cont=1;
    float c1, c2, c3, media;
    scanf("%d", &n);
    while (cont<=n) {
        scanf("%f%f%f", &c1, &c2, &c3);
        media= (((c1*2)+(c2*3)+(c3*5))/10);
        printf("%.1f\n", media);
        cont++;
    }
    return 0;
}
