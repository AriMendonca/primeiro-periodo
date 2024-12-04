#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1, valor2, valor3, valor4, valor5, valor6, cont=0;
    scanf("%d%d%d%d%d%d", &valor1, &valor2, &valor3, &valor4, &valor5, &valor6);
    if (valor1>0) {
        cont= cont+1;
    }
    if (valor2>0) {
        cont= cont+1;
    }
    if (valor3>0){
        cont=cont+1;
    }
    if (valor4>0) {
        cont=cont+1;
    }
    if (valor5>0) {
        cont=cont+1;
    }
    if (valor6>0) {
        cont=cont+1;
    }
        printf ("%d valores positivos\n", cont);
    return 0;
}
