#ifndef ENFILEIRAR_INFO_FILA_H
#define ENFILEIRAR_INFO_FILA_H

void enfileirarInfo(pDFila pd, void *info){

    if(pd != NULL)
        incluirInfo(pd->Lista, info);

}

#endif
