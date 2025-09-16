/*3. [PONTEIRO E MALLOC] Escreva um programa em C que leia um nu mero inteiro e determina se e um nu mero perfeito.
Um nu mero e perfeito se a soma dos seus divisores e igual ao pro prio nu mero. Por exemplo, o nu mero 6 e perfeito, 
pois a soma dos seus divisores - 1 + 2 + 3 – e igual a 6.
A lo gica do programa para determinar se um nu mero e perfeito deve ser implementada com uma funça o. int perfeito(int *n)*/

#include <stdio.h>
#include <stdlib.h>

int perfeito(int *n)
{
    int soma = 0;
    for(int i = 1; i < *n; i++)
    {
        if (*n % i == 0) 
        soma = soma + i;

    }
    
    if (soma == *n)
        return 1;
    else
        return 0;
}


int main()
{
    void *num;

    printf("Insira numero:");

    num = malloc(sizeof(int));
    scanf("%d",num);

    if (perfeito ((int*)num))
        printf("Perfeito");
    else
        printf("Imperfeito");

    return 0;
}