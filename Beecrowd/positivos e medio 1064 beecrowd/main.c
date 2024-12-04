#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valores, conta, soma=0;
    int cont2=0;
    for(int i=0; i<=5; i++) {
            scanf("%f", &valores);
    if (valores>0) {
        soma=(soma+valores);
        cont2= (cont2+1);
    }
    };
    printf("%d valores positivos\n", cont2);
    conta= soma/cont2;
    printf("%.1f\n", conta);
    return 0;
}
