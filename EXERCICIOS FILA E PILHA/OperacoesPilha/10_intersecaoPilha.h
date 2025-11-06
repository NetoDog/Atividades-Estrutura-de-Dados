#ifndef INTERSECAO_PILHA_H
#define INTERSECAO_PILHA_H

//as duas pilhas mandadas sao totalmente esvaziadas
pDPilha intersecaoPilha(pDPilha pdp1, pDPilha pdp2, FuncaoComparacao fc){
    pDPilha intersecao = criarPilha();
    pDPilha pdp2aux = criarPilha();
    void *info1, *info2;

    do{
        info1 = desempilharInfo(pdp1);
        if(info1 != NULL){
            if(pilhaVazia(pdp2aux) == 0){
                do{
                    info2 = desempilharInfo(pdp2aux);
                    if(info2 != NULL)
                        empilharInfo(pdp2, info2);
                }while(info2 != NULL);
            }

            do{
                info2 = desempilharInfo(pdp2);
                if(info2 != NULL){
                    if(fc(info1, info2) == 0)
                        empilharInfo(intersecao, info1);
                    empilharInfo(pdp2aux, info2);
                }
            }while(info2 != NULL);
        }
    }while(info1 != NULL);

    free(pdp2aux->Lista);
    free(pdp2aux);

    return intersecao;
}
#endif
