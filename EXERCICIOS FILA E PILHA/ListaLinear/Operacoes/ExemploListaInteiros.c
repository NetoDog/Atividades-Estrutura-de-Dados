#include <stdio.h>
#include <stdlib.h>
#include "Lista.h"
#include "Utils.h"

int main(){

    pDLista listaInt = criarLista();

    int *nove = alocaInt(9);
    /* teste de inclusao */

    incluirInfoFim(listaInt, alocaInt(5));
    incluirInfoFim(listaInt, alocaInt(3));
    incluirInfoFim(listaInt, nove);
    incluirInfoFim(listaInt, alocaInt(1));
    incluirInfoFim(listaInt, alocaInt(2));

    printf("\nResultado da inclusao \n");
    imprimirLista(listaInt, imprimeInt);

    // faz uma copia da lista de inteiros
    pDLista novaLista;
    novaLista = duplicarLista(listaInt, alocaInfoInt);

    int resultado;
    //Atividade 3
    printf("\n");
    printf("Atividade 3");
    resultado = excluirInfo(listaInt, nove,
                            comparaInt);
                            
    

    printf("\nResultado da exclusao \n");
    imprimirLista(listaInt, imprimeInt);
    //Atividade 3
    printf("\n");
    printf("Atividade 3");
    resultado = excluirInfoTotal(listaInt, alocaInt(2),
                                comparaInt,liberaInt);
    
    printf("\nResultado da exclusaoTotal \n");
    imprimirLista(listaInt, imprimeInt);

    printf("\nNova lista\n");
    imprimirLista(novaLista, imprimeInt);

    //Atividade 5 
    printf("\n");
    printf("Atividade 5");
    pDLista listaDividida;
    listaDividida = dividirLista(novaLista, 3);
    printf("\nLista original\n");
    imprimirLista(novaLista, imprimeInt);
    printf("\n Lista dividida \n");
    imprimirLista(listaDividida, imprimeInt);
    
    // atividade 1
    printf("\n");
    printf("Atividade 1");
    printf("\nInclusao inicio\n");
    incluirInfoInicio(listaInt,alocaInt(10));
    imprimirLista(listaInt, imprimeInt);
    // atividade 1
    printf("\n");
    printf("Atividade 1");
    printf("\nInclusao meio\n");
    incluirInfoMeio(listaInt,alocaInt(4),3);
    imprimirLista(listaInt, imprimeInt);

    //Atividade 4
    printf("\n");
    printf("\nAtividade 4");
    printf("\nLista Excluida\n");
    //destruirLista(novaLista);
    imprimirLista(novaLista,imprimeInt);

    //Atividade 4
    printf("\n");
    printf("Atividade 4");
    printf("\nLista Excluida e Liberada\n");
    //destruirListaTotal(listaDividida,liberaInt);
    //imprimirLista(listaDividida,imprimeInt);

    incluirInfoFim(novaLista, alocaInt(5));
    incluirInfoFim(novaLista, alocaInt(3));
    incluirInfoFim(novaLista, nove);
    incluirInfoFim(novaLista, alocaInt(1));
    incluirInfoFim(novaLista, alocaInt(2));

    //Atividade 6
    printf("Atividade 6");
    pDLista uniao = unirLista(novaLista,listaInt,comparaInt);
    printf("\nLista 1\n");
     imprimirLista(novaLista,imprimeInt);
    printf("\nLista 2\n");
     imprimirLista(listaInt,imprimeInt);
    printf("\nLista Unida\n");
    imprimirLista(uniao,imprimeInt);
    
    //Atividade 7
    printf("Atividade 7");
    pDLista intersecto = intersecaoLista(novaLista,listaInt,comparaInt);
    printf("\nLista 1\n");
     imprimirLista(novaLista,imprimeInt);
    printf("\nLista 2\n");
     imprimirLista(listaInt,imprimeInt);
    printf("\nLista intersecta\n");
    imprimirLista(intersecto,imprimeInt);

    //Atividade 8
    printf("Atividade 8");
    pDLista teste = criarLista();
    incluirInfoFim (teste,alocaInt(68));
    printf("\nAtividade 8\n");
    pDLista disjuca = duplicarLista(intersecto,alocaInfoInt);
    printf("\n");
    imprimirLista(disjuca,imprimeInt);
     printf("\nResultado: %d\n",disjuncaoLista(intersecto,disjuca,comparaInt));
     printf("\nComparacao com uma lista contendo apenas o numero 68\n");imprimirLista(teste,imprimeInt);
     printf("\nResultado: %d\n",disjuncaoLista(intersecto,teste,comparaInt));

     //Atividade 9
     printf("Atividade 9");
    printf("\nLista Contida\n");
    printf("\nLista 1\n");
    imprimirLista(intersecto,imprimeInt);
   printf("\nLista 2\n");
    imprimirLista(disjuca,imprimeInt);
    // printf("\nResultado: %d\n",contida(intersecto,disjuca,comparaInt));
     printf("\nResultado: %d\n",contida(listaDividida,uniao,comparaInt));
     printf("\nLista Contida\n");

    printf("\n Lista  contendo apenas o numero 68\n");
    imprimirLista(teste,imprimeInt);
     printf("\nLista 2\n");
     imprimirLista(listaDividida,imprimeInt);
    
      printf("\nResultado: %d\n",contida(teste,listaDividida,comparaInt));
    //Atividade 10
    printf("Atividade 10");
    printf("\n\n");
    imprimirLista(uniao,imprimeInt);
    printf("\n\n");
    inverterLista(uniao);
    imprimirLista(uniao,imprimeInt);
    printf("\n\n");
    imprimirLista(uniao,imprimeInt);

    //Atividade 10 parte 2
    printf("\nAtividade 10 parte 2");
    printf("\n\n");
    imprimirLista(uniao,imprimeInt);
    printf("\n\n");
    imprimirLista(inverterListamantem(uniao),imprimeInt);
    printf("\n\n");
    imprimirLista(uniao,imprimeInt);

    //Atividade 11
    printf("Atividade 11");

    //imprimirListaRecursiva(intersecto,imprimeInt);

}
