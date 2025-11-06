#ifndef ENFILEIRAR_INFO_FILA_H
#define ENFILEIRAR_INFO_FILA_H

void enfileirarInfo(pDFila pd, void *info){

    if(pd != NULL)
        incluirInfoFim(pd->Lista, info);

}

#endif
