#ifndef INCLUIR_INFO_INICIO_H
#define INCLUIR_INFO_INICIO_H

void incluirInfoInicio(pDLista pd, void *info){

      pNoh novo = (pNoh)malloc(sizeof(Noh));
      novo->info = info;
      novo->prox = pd->inicio;
      
      if(pd->fim == NULL){
         pd->fim = novo;
      }

      pd->inicio = novo;
      pd->quantidade++;
}

#endif
