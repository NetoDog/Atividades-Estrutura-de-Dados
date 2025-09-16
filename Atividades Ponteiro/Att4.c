/*4. [PONTEIRO COM VETOR] Escreva um programa em C que leia um nu mero inteiro N e, em seguida, aloque memo ria suficiente para armazenar N nu meros inteiros.
Escreva tambe m uma funça o que receba os N nu meros inteiros e retorne o maior nu mero dentre eles. int maior(int *vetor)
Obs: NÃO use a notação de vetor (colchetes) da linguagem C para manipulação dos elementos do vetor, utilize somente aritmética de ponteiros.
5.*/
#include <stdio.h>
#include <stdlib.h>

int maior (int *vetor , int n)
{
    int max = *vetor;

    for (int i = 1;i < n;i++)
    {
        if (*(vetor+i) > max)
        {
            max = *(vetor + i);
        }
    }
    return max;
}

int main ()
{
    int N;

    printf("Insira tamanho do vetor:");
    scanf("%d",&N);

    int *vetor= (int*)malloc(N*sizeof(int));
    
    if (vetor == NULL)
    {
        printf("Erro de alocacao de memoria.");
        return 1;
    }

    for (int i = 0; i < N; i++)
    {
    
        printf("Insira numeros %d:" ,i+1);
        scanf("%d",vetor + i);
    
    }

    int maior_num = maior (vetor,N);

    printf("O maior numero e: %d ",maior_num);
    
    return 0;
}