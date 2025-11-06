#ifndef IGUAIS_PILHA_H
#define IGUAIS_PILHA_H

//para elementos unicos nas 2 pilhas
int iguais (pDPilha pilha1, pDPilha pilha2, FuncaoComparacao fc){
    
    void* info1;
    void* info2;
    pDPilha pilha1aux = criarPilha();
    pDPilha pilha2aux = criarPilha();
    int contador = 0;

    if(pilha1->Lista->quantidade != pilha2->Lista->quantidade)
        return 0;

    do{
        info1 = desempilharInfo(pilha1);
        if(info1 != NULL){
            
            do{
                info2 = desempilharInfo(pilha2);
                if(info2 != NULL){
                    if(fc(info1, info2) == 0)
                        contador++;
                    empilharInfo(pilha2aux,info2);
                }
                
            }while(info2 != NULL);

            do{
                info2 = desempilharInfo(pilha2aux);
                if(info2 != NULL){
                    empilharInfo(pilha2, info2);
                }
            }while(info2 != NULL);

            empilharInfo(pilha1aux, info1);
        }
        
    }while(info1 != NULL);

    do{
        info1 = desempilharInfo(pilha1aux);
        if(info1 != NULL)
            empilharInfo(pilha1, info1);
    }while(info1 != NULL);

    free(pilha1aux->Lista);
    free(pilha2aux->Lista);
    free(pilha1aux);
    free(pilha2aux);

    if(contador == pilha1->Lista->quantidade)
        return 1;
    
    return 0;
}

#endif
