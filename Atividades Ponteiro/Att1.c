//1. [PONTEIRO E MALLOC] Escreva um programa em C que leia 2 nu meros reais e imprime a me dia deles.

#include <stdio.h>
#include <stdlib.h>

void main() {

    void *n1;
    void *n2;

    n1 = malloc(sizeof(float));
    n2 = malloc(sizeof(float));
    
    printf("Insira 2 numeros:");
    scanf("%f",n1);
    scanf("%f",n2);

    printf("media : %.2f", (*((float*)n1) + *((float*)n2))/2 );
}