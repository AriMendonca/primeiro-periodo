#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horainicial, horafinal, minutoinicial, minutofinal;
    int duracao, duracao2;
    scanf ("%d%d%d%d", &horainicial, &minutoinicial, &horafinal, &minutofinal);
    duracao2 = minutofinal - minutoinicial;
    if (duracao2 < 0) {
        duracao2 += 60;
        horafinal -= 1;
    }
    duracao= horafinal - horainicial;
    if (duracao <0 ) {
        duracao += 24;
    }
    if (horainicial == horafinal && minutoinicial == minutofinal) {
        duracao = 24;
        duracao2 = 0;
    }
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao, duracao2);
    return 0;
}
