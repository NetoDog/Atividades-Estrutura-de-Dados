#ifndef EMPILHAR_INFO_PILHA_H
#define EMPILHAR_INFO_PILHA_H

void empilharInfo(pDPilha pd, void *info){

    if(pd != NULL)
        incluirInfoFim(pd->Lista, info);

}

#endif
