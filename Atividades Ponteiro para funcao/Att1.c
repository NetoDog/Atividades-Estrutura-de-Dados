#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "C:\Users\Windows 10 pro\Documents\GitHub\Atividades-Estrutura-de-Dados\Ulilidades\Utils.h"
#include "C:\Users\Windows 10 pro\Documents\GitHub\Atividades-Estrutura-de-Dados\Ulilidades\funcoesgenericas.h"


/* Função de mapeamento: converte void* para float a partir de int */
float mapIntToFloat(void *p) {
    return (float)(*(int*)p);
}

int main() {
    int a=5, b=10, c=7;
    void* v[3] = { &a, &b, &c };

    void* maior = encontrarMaior(v, 3, comparaInt);
    printf("Maior = %d\n", *(int*)maior);

    float media = calcularMedia(v, 3, mapIntToFloat);
    printf("Média = %.2f\n", media);
    return 0;
}
