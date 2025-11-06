#ifndef INTERSECCAO_LISTA_H
#define INTERSECCAO_LISTA_H



pDLista intersecaoLista (pDLista lista1 , pDLista
    lista2 , FuncaoComparacao fc ) 
    {
        pDLista novalista = criarLista();
        pNoh atual = lista1->inicio;
    
       
        while(atual != NULL)
        {
            if (contemInfo(lista2,atual->info,fc)!=0)
                if(contemInfo(novalista,atual->info,fc)!=1)
                    incluirInfoFim(novalista,atual->info);
          atual = atual->prox;
        }
        return novalista;
    }





#endif