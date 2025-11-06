#ifndef EXCLUIR_INFO_TOTAL_H
#define EXCLUIR_INFO_TOTAL_H

int excluirInfoTotal(pDLista pd, void *info,
                FuncaoComparacao pfc,
                FuncaoLiberacao  pfl){

    pNoh atual, anterior;
    atual = pd->inicio;
    anterior = NULL;
    while (atual != NULL){

        if (pfc(info, atual->info) == 0){

            if(atual == pd->inicio){
               pd->inicio = atual->prox;
               //inicio = inicio->prox;
            }else{
                if(atual == pd->fim){
                   pd->fim = anterior;
                }
               anterior->prox = atual->prox;
            }
            pfl(atual->info);
            pfl(info);
            free(atual);
            pd->quantidade--;
            return 1;
        }
        anterior = atual;
        atual = atual->prox;
    }

    return 0;
}

#endif
