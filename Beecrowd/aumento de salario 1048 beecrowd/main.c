#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, novosalario, reajuste, percentual;
    scanf("%f", &salario);
    if (salario<=400) {
        novosalario=(salario*1.15);
        reajuste= (salario*0.15);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novosalario, reajuste);
    }
    else if (salario<=800.00) {
        novosalario= (salario*1.12);
        reajuste= (salario*0.12);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %% \n", novosalario, reajuste);
    }
    else if (salario<=1200.00) {
        novosalario=(salario*1.1);
        reajuste= (salario*0.1);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novosalario, reajuste);
    }
    else if (salario<=2000.00) {
        novosalario=(salario*1.07);
        reajuste= (salario*0.07);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novosalario, reajuste);
    }
    else {
        novosalario=(salario*1.04);
        reajuste= (salario*0.04);
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", novosalario, reajuste);
    }

    return 0;
}
