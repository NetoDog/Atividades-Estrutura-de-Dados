#ifndef INVERTER_LISTA_H
#define INVERTER_LISTA_H

void inverterLista( pDLista lista ) 
{
    if (lista == NULL)
    return;

    pNoh atual = lista->inicio;
    pDLista aux = criarLista();
    
    while(atual != NULL)
    {
        incluirInfoInicio(aux,atual->info);
        atual=atual->prox;
    }
    destruirLista(lista);
    lista -> inicio = aux -> inicio;
    lista -> fim = aux -> fim;
    lista -> quantidade = aux -> quantidade;
    
}
 pDLista inverterListamantem ( pDLista lista ) 
 {
    if (lista == NULL)
    return;

    pNoh atual = lista->inicio;
    pDLista aux = criarLista();
    
    while(atual != NULL)
    {
        incluirInfoInicio(aux,atual->info);
        atual=atual->prox;
    }
    return aux;
 }



#endif