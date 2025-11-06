#ifndef CRIAR_PILHA_H
#define CRIAR_PILHA_H

pDPilha criarPilha(){
    
    pDPilha pd = (pDPilha) malloc(sizeof(DPilha));
    pd->Lista = criarLista();

    return pd;
}

#endif
