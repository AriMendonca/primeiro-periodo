#include <stdio.h>
#include <stdlib.h>

int main()
{
int n, numex, total ;
double c=0, r=0, s=0;
double pc, pr, ps;
char experimento;
scanf("%d", &n);
for (int i=1; i<=n; i++)
{
    scanf("%d %c", &numex, &experimento);
    if (experimento == 'C') {
        c=(c+numex);
    }
    else if (experimento == 'R') {
        r=(r+numex);
    }
    else if (experimento == 'S') {
        s=(s+numex);
    }
}
total= c+s+r;
pc= ((c*100)/total);
pr= ((r*100)/total);
ps= ((s*100)/total);
printf ("Total: %.d cobaias\n",total);
printf ("Total de coelhos: %.0lf\n", c);
printf ("Total de ratos: %.0lf\n", r);
printf ("Total de sapos: %.0lf\n", s);
printf ("Percentual de coelhos: %.2lf %\n", pc);
printf ("Percentual de ratos: %.2lf %\n", pr);
printf ("Percentual de sapos: %.2lf %\n", ps);
    return 0;
}
