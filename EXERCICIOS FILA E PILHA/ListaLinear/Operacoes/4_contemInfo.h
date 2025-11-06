#ifndef CONTEM_INFO_H
#define CONTEM_INFO_H

int contemInfo(pDLista pd, void *info, FuncaoComparacao pfc){
    pNoh atual = pd->inicio;

    while (atual!=NULL)
    {
        if (pfc(atual -> info,info)==0)
         return 1;
        atual = atual -> prox;
    }

    return 0;
}

#endif
