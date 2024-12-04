#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, y, impar=0, num;
    scanf("%d", &n);
    for (int i=1; i<=n; i++){
        scanf("%d%d", &x, &y);
        if(y<x){
        num=y+1;
            while(num<x){
                if (num%2!=0) {
                   impar= impar+num;
                }
                num=num+1;
            }
            printf("%d\n", impar);
            num=y+1;
        }

        else if(x<y){
            num=x+1;
            while(num<y){
                if (num%2!=0) {
                   impar= impar+num;
                }
                num=num+1;
            }
            printf("%d\n", impar);
            num=x+1;
        }
        else {
            printf("0\n");
        }
    }

    return 0;
}
