#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Utils.h"
#include "Pilha.h"
#include "Fila.h"

int main(){

    pDFila pdf = criarFila();
    pDFila aux;

    pDPilha pdp1 = criarPilha();
    pDPilha pdp2 = criarPilha();
    pDPilha intersec;

    //exercicio 1
    void* info;
    enfileirarInfo(pdf, alocaInt(1));
    enfileirarInfo(pdf, alocaInt(2));
    enfileirarInfo(pdf, alocaInt(3));
    enfileirarInfo(pdf, alocaInt(4));
    enfileirarInfo(pdf, alocaInt(5));

    inverterFila(pdf);

    do{
        info = desenfileirarInfo(pdf);
        if(info != NULL)
            imprimeInt(info);
    }while(info != NULL);
    printf("\n");

    //exercicio 2
    enfileirarInfo(pdf, alocaInt(1));
    enfileirarInfo(pdf, alocaInt(2));
    enfileirarInfo(pdf, alocaInt(3));
    enfileirarInfo(pdf, alocaInt(4));
    enfileirarInfo(pdf, alocaInt(5));
    aux = copia(pdf, alocaInfoInt);
    do{
        info = desenfileirarInfo(aux);
        if(info != NULL)
            imprimeInt(info);
    }while(info != NULL);
    printf("\n");
    do{
        info = desenfileirarInfo(pdf);
        if(info != NULL)
            imprimeInt(info);
    }while(info != NULL);
    printf("\n");

    //exercicio 3
    enfileirarInfo(pdf, alocaInt(1));
    enfileirarInfo(pdf, alocaInt(2));
    enfileirarInfo(pdf, alocaInt(3));
    enfileirarInfo(pdf, alocaInt(4));
    enfileirarInfo(pdf, alocaInt(5));
    troca(pdf, 1, 5);
    do{
        info = desenfileirarInfo(pdf);
        if(info != NULL)
            imprimeInt(info);
    }while(info != NULL);
    printf("\n");

    //exercicio 4
    char palavra[20] = "arara";
    printf("%s eh palindromo = %d\n", palavra, palindromo(palavra));

    //exercicio 5

    empilharInfo(pdp1, alocaInt(1));
    empilharInfo(pdp1, alocaInt(2));
    empilharInfo(pdp1, alocaInt(3));
    empilharInfo(pdp1, alocaInt(4));
    empilharInfo(pdp1, alocaInt(5));
    empilharInfo(pdp2, alocaInt(1));
    empilharInfo(pdp2, alocaInt(2));
    empilharInfo(pdp2, alocaInt(3));
    empilharInfo(pdp2, alocaInt(4));
    empilharInfo(pdp2, alocaInt(5));

    printf("%d\n", iguais(pdp1,pdp2,comparaInt));


    //exericio 6
    pDPilha copia = copiarPilha(pdp1, alocaInfoInt);
    do{
        info = desempilharInfo(copia);
        if(info != NULL)
            imprimeInt(info);
    }while(info != NULL);
    printf("\n");


    //exericio 7
    char expressao[20] = "(a+b)()+c";
    printf("Expressao balanceada: 1 - sim, 0 - nao: %d\n", balanceamento(expressao,8));

    //exercicio 8
    int* num = alocaInt(5);
    printf("Informacao removida da pilha: 1 - sim, 0 - nao: %d\n", removePorInfo(pdp1, num, comparaInt));

    //exericio 9
    intersec = intersecaoPilha(pdp1,pdp2,comparaInt);

    //exercicio 10
    limparPilha(intersec, liberaInt);
    do{
        info = desempilharInfo(intersec);
        if(info != NULL)
            imprimeInt(info);
    }while(info != NULL);

    //exercicio 11
    printf("Resultado de /*578 = %.3f\n",avalia("/*578"));


    system("PAUSE");
    return 0;
}
