#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   double A, B, C;
   double X1, X2, delta;
   scanf("%lf%lf%lf", &A, &B, &C);
   delta = (B*B)-4*A*C;
   //X1 =  -B-sqrt(delta)/2*A;
   //X2 = -B+sqrt (delta)/2*A;
      if (delta<=0 || A==0) {
    printf("Impossivel calcular\n");
   }
   else {
    X1 = (-B+sqrt(delta))/(2*A);
    X2 = (-B-sqrt(delta))/(2*A);
    printf("R1 = %.5lf\n", X1);
    printf("R2 = %.5lf\n", X2);
   }
    return 0;
}
