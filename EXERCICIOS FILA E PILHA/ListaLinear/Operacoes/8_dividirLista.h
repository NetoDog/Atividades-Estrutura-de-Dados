#ifndef DIVIDIR_LISTA_H
#define DIVIDIR_LISTA_H


pDLista dividirLista(pDLista pd, int pos)
{
    pDLista novaLista;
    novaLista = criarLista();

    int cont = 1;

    pNoh atual = pd->inicio;
    while(atual != NULL){

        if (cont == pos){

            novaLista->inicio = atual->prox;
            atual->prox       = NULL;
            novaLista->fim    = pd->fim;
            pd->fim           = atual;

            novaLista->quantidade = pd->quantidade - pos;
            pd->quantidade        = pos;
            break;
        }

        atual = atual->prox;
        cont++;
    }

    return novaLista;
}

#endif
