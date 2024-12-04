#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota,cont=0, soma=0, media, novo_calculo=1;
    while (novo_calculo==1){
       while (cont<2){
    scanf("%f", &nota);
    if (nota<0 || nota>10)
        {
            printf("nota invalida\n");
        }
    else
    {
        soma= soma+nota;
        cont++;
    }
    }
    media= soma/2;
    printf("media = %.2f\n", media);
    printf("novo calculo (1-sim 2-nao)\n");
    scanf("%f", &novo_calculo);
    }
    return 0;
}
