#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, velocidade;
    float litros, R;
    scanf("%d%d", &tempo, &velocidade);
    R = (tempo*velocidade);
    litros = (R/12);
    printf("%.3f", litros);

    return 0;
}
