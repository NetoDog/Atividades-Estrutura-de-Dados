#ifndef DESENFILEIRAR_INFO_FILA_H
#define DESENFILEIRAR_INFO_FILA_H

void* desenfileirarInfo(pDFila pd){

   if(pd != NULL)
      return excluirInfoPos(pd->Lista, 1);
   
   return NULL;
}

#endif
