#include <stdio.h>
#include <stdlib.h>

int main()
{
     float i=0, j=1, cont=0;
            printf("I=%.0f J=%.0f\n", i, j);
            printf("I=%.0f J=%.0f\n", i, j+1);
            printf("I=%.0f J=%.0f\n", i, j+2);
        while(i<=2) {
            i=i+0.2;
            j=j+0.2;
            if (i>1.9){
            printf("I=%.0f J=%.0f\n", i, j);
            printf("I=%.0f J=%.0f\n", i, j+1);
            printf("I=%.0f J=%.0f\n", i, j+2);
            }
            else if (i==1.0){
            printf("I=%.0f J=%.0f\n", i, j);
            printf("I=%.0f J=%.0f\n", i, j+1);
            printf("I=%.0f J=%.0f\n", i, j+2);
            }
            else {
            printf("I=%.1f J=%.1f\n", i, j);
            printf("I=%.1f J=%.1f\n", i, j+1);
            printf("I=%.1f J=%.1f\n", i, j+2);
            }
        }
    return 0;
}
