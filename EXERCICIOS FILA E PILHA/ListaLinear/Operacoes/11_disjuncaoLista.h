#ifndef DISJUNCAO_LISTA_H
#define DISJUNCAO_LISTA_H

int disjuncaoLista ( pDLista lista1 , pDLista lista2 ,
    FuncaoComparacao fc )
    {
        pNoh atual = lista1-> inicio;
      

        while(atual != NULL)
        {
            if (contemInfo(lista2,atual->info,fc)==1)
            return 0;
            atual = atual->prox;
        }

         return 1;
    }











#endif