#include <stdio.h>
#include <stdlib.h>

int main()
{
    float renda, imposto, aux, aux2, aux3;
    scanf ("%f", &renda);
    if (renda<=2000.00) {
        printf ("Isento\n");
    }
    else if (renda<=3000.00) {
        imposto=((renda-2000)*0.08);
        printf("R$ %.2f\n", imposto);
    }
    else if (renda<=4500.00) {
        aux=(renda-2000);
        aux2= (1000*0.08);
        imposto= ((renda-3000)*0.18)+aux2;
        printf("R$ %.2f\n", imposto);
    }
    else if (renda>4500) {
        aux=(renda-2000);
        aux2=(1000*0.08);
        aux3=(1500*0.18)+aux2;
        imposto= ((renda-4500)*0.28)+aux3;
        printf("R$ %.2f\n", imposto);
    }
    return 0;
}
