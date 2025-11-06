#ifndef BALANCEAMENTO_PILHA_H
#define BALANCEAMENTO_PILHA_H

int balanceamento (char* palavra, int tamanho){
    pDPilha aux = criarPilha();
    void *info;
    int i = 0;

    while(i <= tamanho-1){
        if(palavra[i] == '(')
            empilharInfo(aux, &palavra[i]);
        if(palavra[i] == ')')
            info = desempilharInfo(aux);
            if(info == NULL){
                free(aux);
                return 0;
            }
        i++;
    }
    
    free(aux->Lista);
    free(aux);
    return 1;
}
	
#endif
