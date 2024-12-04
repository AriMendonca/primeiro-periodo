#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inicio, horainicio, minutoinicio,segundoinicio;
    int fim, horafim, minutofim, segundofim;
    int dias, horas, minutos, segundos;
    char dia_inicio[4], dia_fim[4];
        scanf("%s %d",dia_inicio ,&inicio);
        scanf ("%d : %d : %d", &horainicio, &minutoinicio,&segundoinicio);
        scanf("%s %d",dia_fim ,&fim);
        scanf("%d : %d : %d", &horafim, &minutofim, &segundofim);
       /* printf("Dia %d\n", inicio);
        printf ("%d : %d : %d\n", horainicio, minutoinicio, segundoinicio);
        printf("Dia %d\n", fim);
        printf("%d : %d : %d\n", horafim, minutofim, segundofim);*/
    dias= fim-inicio;
    horas= horafim-horainicio;
    minutos= minutofim-minutoinicio;
    segundos= segundofim-segundoinicio;
   if (segundos<0) {
        minutos=minutos-1;
        segundos=segundos+60;
    }
    if (minutos<0) {
        horas= horas-1;
        minutos=minutos+60;
    }
    if (horas<0) {
        dias=dias-1;
        horas= horas+24;
    }
    printf("%d dia(s)\n", dias);
    printf("%d hora(s)\n", horas);
    printf("%d minuto(s)\n", minutos);
    printf("%d segundo(s)\n", segundos);
    return 0;
}
