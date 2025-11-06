#ifndef REMOVERPORINFO_PILHA_H
#define REMOVERPORINFO_PILHA_H

//remove apenas 1 informacao da pilha
int removePorInfo (pDPilha pdp, void* valor, FuncaoComparacao fc){
    void* info;
    void* auxinfo;
    pDPilha aux = criarPilha();
    int retorno = 0;

    do{
        info = desempilharInfo(pdp);
        if(info != NULL){
            if(retorno == 0)
                if(fc(info,valor) == 0)
                    retorno = 1;
                else
                    empilharInfo(aux, info);
            else
                empilharInfo(aux, info);
        }
    }while(info != NULL);

    do{
        info = desempilharInfo(aux);
        if(info != NULL){
            empilharInfo(pdp, info);
        }
    }while(info != NULL);

    free(aux->Lista);
    free(aux);

    return retorno;

}	

#endif
