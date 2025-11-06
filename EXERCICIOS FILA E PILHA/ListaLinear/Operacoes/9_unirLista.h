#ifndef UNIR_LISTA_H
#define UNIR_LISTA_H

pDLista unirLista ( pDLista lista1 , pDLista lista2 ,
    FuncaoComparacao fc ) 
    {
        pDLista novalista = criarLista();
        pNoh atual = lista1->inicio;
    
       
        while(atual != NULL)
        {
            if (contemInfo(novalista,atual->info,fc)!=1)
           incluirInfoFim(novalista,atual->info);
          atual = atual->prox;
        }
        atual = lista2->inicio;
        while(atual != NULL)
        {
            if (contemInfo(novalista,atual->info,fc)!=1)
             incluirInfoFim(novalista,atual->info);
            atual = atual->prox;
        }

        return novalista;

    }









#endif