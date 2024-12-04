#include <stdio.h>
#include <stdlib.h>

int main()
{
  int number;
  int count =0;
  for(int i=0; i <= 1000; i++){
    printf("%d\n",i);

  }
  printf("digite um numero ");
  scanf("%d", &number);
  for(int i=0; i <= 1000; i++){
    if (i == number){
    count++;
    }
  }
  printf("o número de %d apareceu %d vezes na sequencia
         .\n", number, count);
    return 0;
}
