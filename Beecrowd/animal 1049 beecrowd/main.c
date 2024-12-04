#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char palavra[100], palavra1[100], palavra2[100];
    scanf ("%s %s %s", &palavra, &palavra1, &palavra2);
    if (strcmp(palavra, "vertebrado") == 0) {
        if (strcmp(palavra1, "ave") == 0) {
            if (strcmp(palavra2, "carnivoro") == 0) {
                printf("aguia\n");
            }
            else if(strcmp(palavra2, "onivoro") == 0) {
                printf("pomba\n");
            }
        }
        if(strcmp(palavra1,"mamifero") ==0 ){
            if(strcmp(palavra2,"onivoro")==0 ){
                printf("homem\n");
            }
            else if (strcmp(palavra2,"herbivoro") ==0) {
                printf("vaca\n");
            }
        }
    }
    if (strcmp(palavra,"invertebrado") == 0) {
        if (strcmp(palavra1,"inseto")== 0){
            if (strcmp(palavra2,"hematofago")== 0) {
                printf("pulga\n");
            }
            else if(strcmp(palavra2,"herbivoro")==0){
                printf("lagarta\n");
            }
        }
        if(strcmp(palavra1,"anelideo")== 0){
            if(strcmp(palavra2,"hematofago")== 0){
                printf("sanguessuga\n");
            }
            else if (strcmp(palavra2,"onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
