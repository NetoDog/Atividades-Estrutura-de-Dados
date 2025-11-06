#ifndef DESTRUIR_LISTA_H
#define DESTRUIR_LISTA_H

/* -------------------------------------*/
void destruirLista(pDLista pd){
    pNoh atual = pd->inicio;
    pNoh aux;

    while(atual != NULL)
    {
        aux = atual -> prox;
        free(atual);
        atual = aux;
    }
    pd->inicio=NULL;
    pd->fim=NULL;
    pd->quantidade = 0;
    
}
void destruirListaTotal(pDLista pd,FuncaoLiberacao pfl){
    pNoh atual = pd->inicio;
    pNoh aux;

    while(atual != NULL)
    {
        aux = atual -> prox;
        pfl(atual->info);
        free(atual);
        atual = aux;
    }
    pd->inicio=NULL;
    pd->fim=NULL;
    pd->quantidade = 0;
    
}

#endif

