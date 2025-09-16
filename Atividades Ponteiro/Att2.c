/*2. [PONTEIRO E MALLOC] Escreva um programa em C que leia 3 nu meros inteiros e informa o tipo de triangulo formado pelos 3 nu meros.
- Equilátero : 3 lados iguais
- Isósceles : 2 lados iguais
- Escaleno : todos os lados diferentes
3.*/
#include <stdio.h>
#include <stdlib.h>

void main()
{
    void *n1, *n2, *n3;
    
    
    n1 = malloc(sizeof(float));
    n2 = malloc(sizeof(float));
    n3 = malloc(sizeof(float));
    
    printf("Insira numeros:");
   
    scanf("%f",n1);
     scanf("%f",n2);
      scanf("%f",n3);

     if (*(float*)n1 == *(float*)n2 && *(float*)n1 == *(float*)n3)  
        printf("Equilatero\n");
        else
            if(*(float*)n1 == *(float*)n2 || *(float*)n2 == *(float*)n3 || *(float*)n1 == *(float*)n3)
                printf("Isoceles\n");
                else
                    printf("Escaleno\n");
            
      
}