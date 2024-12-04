#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;
   scanf("%d", &numero);
   if (numero==61) {
    printf("Brasilia\n");
   }
    else if (numero==71){
    printf("Salvador\n");
    }
    else if (numero==11){
    printf("Sao Paulo\n");
    }
    else if (numero==21){
    printf("Rio de Janeiro\n");
    }
    else if (numero==32){
    printf("Juiz de Fora\n");
    }
    else if (numero==19){
    printf("Campinas\n");
    }
    else if (numero==27){
    printf("Vitoria\n");
    }
    else if (numero==31){
    printf("Belo Horizonte\n");
    }
    else {
        printf("DDD nao cadastrado\n");
    }
    return 0;
}
