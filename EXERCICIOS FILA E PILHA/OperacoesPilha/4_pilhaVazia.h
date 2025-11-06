#ifndef PILHAVAZIA_PILHA_H
#define PILHAVAZIA_PILHA_H

int pilhaVazia(pDPilha pd){
    if(pd == NULL)
        return 1;
    
    if(pd->Lista->quantidade == 0)
        return 1;

    return 0;
}

#endif
