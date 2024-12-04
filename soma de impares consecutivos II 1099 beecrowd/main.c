#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y;
    int soma=0;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        scanf("%d%d", &x, &y);
        if (x<y){
            for (int j=x+1; j<y; j++){
               if(j%2!=0){
                soma=soma+j;
               }
            }
            printf("%d\n", soma);
            soma=0;
        }
            else {
                for (int j=y+1; j<x; j++){
                   if(j%2!=0){
                    soma=soma+j;
                   }
                }
                printf("%d\n", soma);
                soma=0;
            }
    }
    return 0;
}
