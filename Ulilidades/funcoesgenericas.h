#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"    // só se você quiser, por exemplo, usar comparaInt, imprimeInt etc.

/*-------------------------------------------------------------
  Tipos e protótipos
-------------------------------------------------------------*/
struct CartaBaralho {
    char naipe;
    int  valor;
};

typedef  int   (*FuncaoComparacao) (void *, void *);
typedef  int   (*FuncaoPredicado)  (void *);
typedef  float (*FuncaoMapeamento) (void *);
typedef  void  (*FuncaoOperacao)   (void *);
typedef  int   (*FuncaoCoringa)    (struct CartaBaralho, struct CartaBaralho);

/* Assinaturas */
void bubbleSort(void* [], int, FuncaoComparacao);
void* encontrarMaior(void* [], int, FuncaoComparacao);
int   contar(void* [], int, FuncaoPredicado);
float calcularMedia(void* [], int, FuncaoMapeamento);
void  aplicarOperacao(void* [], int, FuncaoOperacao);
void  identificarCoringa(struct CartaBaralho[], int,
                         struct CartaBaralho, FuncaoCoringa);

/*-------------------------------------------------------------
  Implementações
-------------------------------------------------------------*/
void bubbleSort(void* dados[], int tam, FuncaoComparacao pfc) {
    int i, j;
    void *temp;
    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - i - 1; j++) {
            if (pfc(dados[j], dados[j + 1]) < 0) {
                temp = dados[j];
                dados[j] = dados[j + 1];
                dados[j + 1] = temp;
            }
        }
    }
}

/* Retorna o ponteiro para o maior elemento segundo a função de comparação */
void* encontrarMaior(void* dados[], int tam, FuncaoComparacao pfc) {
    if (tam == 0) return NULL;
    void *maior = dados[0];
    for (int i = 1; i < tam; i++) {
        /* se pfc(dados[i], maior) > 0 então dados[i] é “maior” */
        if (pfc(dados[i], maior) > 0)
            maior = dados[i];
    }
    return maior;
}

/* Conta quantos elementos satisfazem o predicado */
int contar(void* dados[], int tam, FuncaoPredicado pfp) {
    int cont = 0;
    for (int i = 0; i < tam; i++)
        if (pfp(dados[i])) cont++;
    return cont;
}

/* Calcula média a partir de um mapeamento para float */
float calcularMedia(void* dados[], int tam, FuncaoMapeamento pfm) {
    if (tam == 0) return 0.0f;
    float soma = 0.0f;
    for (int i = 0; i < tam; i++)
        soma += pfm(dados[i]);
    return soma / tam;
}

/* Aplica uma operação a cada elemento do vetor */
void aplicarOperacao(void* dados[], int tam, FuncaoOperacao pfo) {
    for (int i = 0; i < tam; i++)
        pfo(dados[i]);
}

/* Percorre o baralho e usa a função-coringa para decidir qual é o coringa */
void identificarCoringa(struct CartaBaralho baralho[], int tam,
                        struct CartaBaralho vira, FuncaoCoringa pfm) {
    for (int i = 0; i < tam; i++) {
        if (pfm(baralho[i], vira)) {
            printf("Coringa encontrado: valor %d, naipe %c\n",
                   baralho[i].valor, baralho[i].naipe);
            return;
        }
    }
    printf("Nenhum coringa identificado.\n");
}
