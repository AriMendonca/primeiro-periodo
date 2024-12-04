#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codigo, quantidade;
    double cq, xs, xb, ts, refri;
    scanf("%d", &codigo);
    scanf("%d", &quantidade);
    cq = 4.00*quantidade;
    xs = 4.50*quantidade;
    xb = 5.00*quantidade;
    ts = 2.00*quantidade;
    refri = 1.50*quantidade;
    if (codigo==1) {
            printf ("Total: R$ %.2lf\n", cq);
            }
    else if (codigo==2) {
        printf("Total: R$ %.2lf\n", xs);
    }
    else if (codigo==3) {
        printf("Total: R$ %.2lf\n", xb);
    }
        else if (codigo==4) {
            printf("Total: R$ %.2lf\n", ts);
    }
    else if (codigo==5) {
        printf("Total: R$ %.2lf\n", refri);
    }
    ;return 0;
}
