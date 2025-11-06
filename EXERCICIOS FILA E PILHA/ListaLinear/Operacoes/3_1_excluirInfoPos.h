void* excluirInfoPos(pDLista pd, int pos){

    int cont=1;

    pNoh atual, ant;

    atual = pd->inicio;
    ant   = NULL;

    /* encontra o noh correspondente a posicao informada */
    while(atual != NULL && cont < pos){
       ant   = atual;
       atual = atual->prox;
       cont++;
    }

    /* verifica se a info existe na lista */
    if (atual != NULL){
        /* eh o primeiro da lista */
        if (atual == pd->inicio)
            pd->inicio = atual->prox;
        else
        /* eh o ultimo da lista */
        if (atual == pd->fim){
            pd->fim = ant;
            ant->prox  = NULL;
        } else
             /* estah no meio da lista */
             ant->prox = atual->prox;

        pd->quantidade--;
        void * auxInfo = atual->info;
        free(atual);
        return auxInfo;
    }

    return NULL;
}
