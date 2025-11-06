#ifndef LIMPAR_PILHA_H
#define LIMPAR_PILHA_H

void limparPilha(pDPilha pdp, FuncaoLiberacao fl){
    
    void* info = desempilharInfo(pdp);
    if(pilhaVazia(pdp) == 0)
        limparPilha(pdp, fl);
    
    fl(info);
}

#endif
