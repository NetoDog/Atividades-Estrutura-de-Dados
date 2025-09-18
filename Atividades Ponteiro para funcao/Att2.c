#include <stdio.h>
#include "C:\Users\Windows 10 pro\Documents\GitHub\Atividades-Estrutura-de-Dados\Ulilidades\Utils.h"   // só se você quiser usar utilitários de int/Data

/* --- Estrutura e protótipos vindos do seu cabeçalho --- */
struct CartaBaralho {
    char naipe;   /* O, C, E, P (ouros, copas, espadas, paus, por ex.) */
    int  valor;   /* 1 a 13 */
};

typedef int (*FuncaoCoringa)(struct CartaBaralho, struct CartaBaralho);

/*/* Implementação da função que procura o coringa */
void identificarCoringa(struct CartaBaralho baralho[], int tam,
                        struct CartaBaralho vira,
                        FuncaoCoringa pfm)
{
    int i;
    for (i = 0; i < tam; i++) {
        if (pfm(baralho[i], vira)) {
            printf("Coringa encontrado: valor %d, naipe %c\n",
                   baralho[i].valor, baralho[i].naipe);
            return;
        }
    }
    printf("Nenhum coringa identificado.\n");
}

/* --------- Regras do jogo (exemplo) ---------
   Aqui a regra do coringa é:
   “toda carta com o mesmo naipe da carta VIRA é coringa”.
   Você pode alterar para a regra desejada.
*/
int ehCoringa(struct CartaBaralho carta, struct CartaBaralho vira) {
    return carta.naipe == vira.naipe;
}

/* ---------------- Programa principal ---------------- */
int main(void) {
    /* baralho de teste */
    struct CartaBaralho baralho[5] = {
        {'O', 1},   /* Ouros Ás  */
        {'C', 13},  /* Copas Rei */
        {'P', 7},   /* Paus 7    */
        {'O', 4},   /* Ouros 4   */
        {'E', 9}    /* Espadas 9 */
    };

    /* carta “vira” */
    struct CartaBaralho vira = {'O', 10}; /* Ouros 10 */

    identificarCoringa(baralho, 5, vira, ehCoringa);

    return 0;
}
