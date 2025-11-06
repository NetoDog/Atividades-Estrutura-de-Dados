#ifndef DESEMPILHAR_INFO_PILHA_H
#define DESEMPILHAR_INFO_PILHA_H

void* desempilharInfo(pDPilha pd){

   if(pd != NULL)
      return excluirInfoPos(pd->Lista, pd->Lista->quantidade);
   
   return NULL;
   
}

#endif
