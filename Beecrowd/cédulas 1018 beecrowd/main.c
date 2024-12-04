#include <stdio.h>
#include <stdlib.h>

int main()
{
   int cedula;
   int ced100, ced50, ced20, ced10, ced5, ced2, ced1;
   scanf("%d", &cedula);
    printf("%d\n", cedula);
    ced100 = (cedula / 100);
    cedula = cedula % 100;
    ced50 = (cedula / 50);
    cedula = cedula % 50;
    ced20 = (cedula / 20);
    cedula = cedula % 20;
    ced10 = (cedula / 10);
    cedula = cedula % 10;
    ced5 = (cedula / 5);
    cedula = cedula % 5;
    ced2 = (cedula / 2);
    cedula = cedula % 2;
    ced1 = cedula;
   printf("%d nota(s) de R$ 100,00\n", ced100);
   printf("%d nota(s) de R$ 50,00\n", ced50);
   printf("%d nota(s) de R$ 20,00\n", ced20);
   printf("%d nota(s) de R$ 10,00\n", ced10);
   printf("%d nota(s) de R$ 5,00\n", ced5);
   printf("%d nota(s) de R$ 2,00\n", ced2);
   printf("%d nota(s) de R$ 1,00\n", ced1);
    return 0;
}
