#ifndef CONTIDA_LISTA_H
#define CONTIDA_LISTA_H

int contida ( pDLista lista1 , pDLista lista2 ,
    FuncaoComparacao fc ) 
{
    pNoh atual = lista1->inicio;
    int bolean = 0;

    while(atual != NULL)
    {

        if (contemInfo(lista2,atual->info,fc)==1)
            bolean = 0;
                else
                    bolean=1;
        atual = atual -> prox; 
    }
    if (bolean == 0)
        return 1;
    if (bolean == 1)
        return 0;
}
#endif