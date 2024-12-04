#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    float y, resultado;
   // printf("km");
    scanf("%d", &x);
    //printf("litros");
    scanf("%f", &y);
    resultado= x/y;
    printf("%.3f km/l\n", resultado);
    return 0;
}
