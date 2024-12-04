#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float N;
    int notas, moedas;
    int v100, v50, v20,v10, v5, v2;
    int R1, c50, c25, c10, c5, c1;
    scanf("%f", &N);
    notas = (int)N;
    moedas = round((N-notas)*100);
    v100 = (notas/100);
    notas%= 100;
    v50 = notas/50;
    notas%= 50;
    v20 = (notas/20);
    notas%= 20;
    v10 = notas/10;
    notas%= 10;
    v5 = (notas/5);
    notas%=5;
    v2 = notas/2;
    notas %= 2;

    R1 = notas;
    c50= moedas/50;
    moedas%= 50;
    c25 = moedas/25;
    moedas%= 25;
    c10= moedas/10;
    moedas%= 10;
    c5 = moedas/5;
    moedas%= 5;
    c1 = moedas;
    printf ("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", v100);
    printf("%d nota(s) de R$ 50.00\n", v50);
    printf("%d nota(s) de R$ 20.00\n", v20);
    printf("%d nota(s) de R$ 10.00\n", v10);
    printf("%d nota(s) de R$ 5.00\n", v5);
    printf("%d nota(s) de R$ 2.00\n", v2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", R1);
    printf("%d moeda(s) de R$ 0.50\n", c50);
    printf("%d moeda(s) de R$ 0.25\n", c25);
    printf("%d moeda(s) de R$ 0.10\n", c10);
    printf("%d moeda(s) de R$ 0.05\n", c5);
    printf("%d moeda(s) de R$ 0.01\n", c1);
    return 0;
}
