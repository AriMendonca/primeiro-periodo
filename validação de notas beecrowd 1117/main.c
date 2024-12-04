#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota,cont=0, soma=0, media;
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
    return 0;
    }

