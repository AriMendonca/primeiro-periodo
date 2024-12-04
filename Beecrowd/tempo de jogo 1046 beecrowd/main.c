#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicial, finalh, duracao;
    scanf ("%d", &inicial);
    scanf ("%d", &finalh);
    if (inicial > finalh) {
        duracao = (24-inicial+finalh);
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    else if (inicial == finalh) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else {
        duracao= (finalh - inicial);
        printf("O JOGO DUROU %d HORA(S)\n", duracao);
    }
    return 0;
}
