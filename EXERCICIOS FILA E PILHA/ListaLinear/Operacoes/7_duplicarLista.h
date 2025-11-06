#ifndef DUPLICAR_LISTA_H
#define DUPLICAR_LISTA_H

pDLista duplicarLista(pDLista pd, FuncaoAlocacao fa)
{

    pDLista novaLista;
    novaLista = criarLista();

    pNoh atual;
    atual = pd->inicio;
    while (atual != NULL){

        void * novaInfo = fa(atual->info);
        incluirInfoFim(novaLista, novaInfo);

        atual = atual->prox;
    }

    return novaLista;
}

#endif
