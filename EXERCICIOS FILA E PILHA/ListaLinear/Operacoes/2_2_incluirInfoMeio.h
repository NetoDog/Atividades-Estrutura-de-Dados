#ifndef INCLUIR_INFO_MEIO_H
#define INCLUIR_INFO_MEIO_H


void     incluirInfoMeio  (pDLista pd, void *info, int pos)
{
    pNoh novo = (pNoh)malloc(sizeof(Noh));
    novo->info = info;
    
    int cont=1;

    pNoh atual = pd->inicio;

    while(atual != NULL)
    {
        
        if (cont == pos)
        {
         novo->prox= atual->prox;
         atual->prox= novo;
         
         if(cont == pd->quantidade)
          pd->fim = novo;
         
          pd->quantidade++;
          
          return;
        }
        atual = atual -> prox;
        cont++;
    }

}
#endif