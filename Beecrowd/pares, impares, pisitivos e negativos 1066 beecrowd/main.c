#include <stdio.h>
#include <stdlib.h>

int main()
{
  int valores, cont=0, cont2=0, positivos=0, negativos=0;
    for (int i=0; i<=4; i++) {
        scanf("%d", &valores);
        if (valores%2==0) {
            cont=cont+1;
        }
        if (valores%2!=0) {
            cont2=cont2+1;
        }
        if (valores>0) {
            positivos=positivos+1;
        }
        if (valores<0) {
           negativos=negativos+1;
        }
    }
    printf("%d valor(es) par(es)\n", cont);
    printf("%d valor(es) impar(es)\n", cont2);
    printf("%d valor(es) positivo(s)\n", positivos);
    printf("%d valor(es) negativo(s)\n", negativos);

    return 0;
}

