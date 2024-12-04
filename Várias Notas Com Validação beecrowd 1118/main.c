#include <stdio.h>
#include <stdlib.h>

int main()
{
    float novo=1;
    while(novo==1){
        float nota1, soma=0, media , cont=0;
        while (cont<2)
        {
         scanf("%f", &nota1);
         if ((nota1>=0)&&(nota1<=10))
         {
            soma=soma+nota1;
            cont++;
         }
         else{
            printf("nota invalida\n");
            }
        }
        media= soma/2;
        printf("media = %.2f\n", media);
        novo=0;
    while(novo!=1 && novo!=2){
        printf ("novo calculo (1-sim 2-nao)\n");
        scanf("%f", &novo);
    }
    }
    return 0;
}
