#include <stdio.h>
#include <stdlib.h>

int main()
{
    float casos, resultado,x, y;
    scanf("%f", &casos);
    for (int i=0; i<casos; i++)
    {
        scanf("%f%f", &x, &y);
        resultado= (x/y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else {
            printf("%.1f\n", resultado);
        }
    }
    return 0;
}
