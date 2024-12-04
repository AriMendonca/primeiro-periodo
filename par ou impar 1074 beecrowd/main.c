#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        scanf("%d", &x);
        if ((x%2==0) && (x!=0)){
            printf ("EVEN ");
        }
        else if (x!=0){
            printf("ODD ");
        }
        if (x>0) {
            printf("POSITIVE");
        }
        else if (x<0) {
            printf("NEGATIVE");
        }
        else {
            printf("NULL");
        }
        printf("\n");
        }
    return 0;
}
