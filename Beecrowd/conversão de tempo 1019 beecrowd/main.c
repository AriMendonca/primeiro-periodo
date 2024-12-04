#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N;
  int H, min, seg2;
  scanf ("%d", &N);
  H = (N/3600);
  printf("%d:", H);
  min = (N%3600);
  min = (min/60);
  printf("%d:", min);
  seg2 = (N%60);
  printf("%d/n", seg2);
    return 0;
}
