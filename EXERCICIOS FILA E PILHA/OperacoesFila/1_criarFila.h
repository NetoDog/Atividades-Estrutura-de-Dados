#ifndef CRIAR_FILA_H
#define CRIAR_FILA_H

pDFila criarFila(){
    pDFila pd = (pDFila) malloc(sizeof(DFila));
    pd->Lista = criarLista();

    return pd;
}

#endif
