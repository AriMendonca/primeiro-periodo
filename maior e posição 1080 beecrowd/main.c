#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m=0, mn=0;
    for (int i=1; i<=100; i++) {
        scanf("%d", &n);
        if (n>mn) {
            mn=n;
            m=i;
        }
    }
    printf ("%d\n%d\n", mn, m);

    return 0;
}
