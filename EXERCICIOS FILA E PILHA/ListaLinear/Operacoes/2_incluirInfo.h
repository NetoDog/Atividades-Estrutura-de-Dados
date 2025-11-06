#ifndef INCLUIR_INFO_FIM_H
#define INCLUIR_INFO_FIM_H

void incluirInfoFim(pDLista pd, void *info){

      pNoh novo = (pNoh)malloc(sizeof(Noh));
      novo->info = info;
      novo->prox = NULL;
      if(pd->inicio == NULL)
         pd->inicio = novo;

      if (pd->fim != NULL)
          pd->fim->prox = novo;

      pd->fim = novo;
      pd->quantidade++;
}

#endif
