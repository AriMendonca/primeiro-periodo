#include <stdio.h>
#include <stdlib.h>

int main()
{
    double A, B, C, aux;
    scanf ("%lf%lf%lf", &A, &B, &C);

  if ((A<B))
    {
        aux=B;
        B=A;
        A=aux;
    }
 if (A<C) {
    aux=C;
    C=A;
    A=aux;
 }
    if (B<C)
    {
        aux=C;
        C=B;
        B=aux;
    }

printf("%.1lf%.1lf%.1lf\n", A, B, C);
    if (A>=(B+C)) {
        printf("NAO FORMA TRIANGULO\n");
    }
    else{
        if ((A*A)==(B*B+C*C)) {
        printf("TRIANGULO RETANGULO\n");
    }
   if ((A*A)>(B*B)+(C*C)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
     if ((A*A)<(B*B)+(C*C)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
     if ((A==B) && (B==C)) {
        printf("TRIANGULO EQUILATERO\n");
    }
    if (((A==B) && (B!=C)) || ((B==C) &&(C!=A)) || ((A==C)&&(C!=B))){
        printf("TRIANGULO ISOSCELES\n");
    }
    }

    return 0;
}
