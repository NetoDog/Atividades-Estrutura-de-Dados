#ifndef COPIAR_PILHA_H
#define COPIAR_PILHA_H

pDPilha copiarPilha (pDPilha pdp, FuncaoAlocacao fa){
    void* info;
    pDPilha copia = criarPilha();
    pDPilha aux = criarPilha();

    do{
        info = desempilharInfo(pdp);
        if(info != NULL){
            empilharInfo(aux, info);
        }
    }while(info != NULL);

    do{
        info = desempilharInfo(aux);
        if(info != NULL){
            empilharInfo(pdp, info);
            empilharInfo(copia, fa(info));
        }
    }while(info != NULL);

    free(aux->Lista);
    free(aux);

    return copia;

}

#endif
