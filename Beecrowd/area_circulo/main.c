#include <stdio.h>
#include <stdlib.h>

int main()
{
    float raio, resultado;
    scanf ("%f", &raio); // %f chama o numero flutuante
    resultado = 3.1428*(raio*raio);
    printf ("resultado: %.2f", resultado);// .2 limita o numero de casas
    return 0;
}
