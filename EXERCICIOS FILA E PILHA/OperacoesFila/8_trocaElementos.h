#ifndef TROCAELEMENTOS_FILA_H
#define TROCAELEMENTOS_FILA_H

void troca (pDFila pdf, int a, int b){
    void* info;
    pDFila aux = criarFila();
    void* auxa;
    void* auxb;

    int contador = 1;
    do{
        info = desenfileirarInfo(pdf);
        if(info != NULL){
            if(contador == a)
                auxa = info;
            else if(contador == b)
                auxb = info;
            
            enfileirarInfo(aux, info);
        }

        contador++;
    }while(info != NULL);

    contador = 1;
    do{
        info = desenfileirarInfo(aux);
        if(info != NULL){
            if(contador == a)
                enfileirarInfo(pdf, auxb);
            else if(contador == b)
                enfileirarInfo(pdf, auxa);
            else
                enfileirarInfo(pdf, info);
        }

        contador++;
    }while(info != NULL);

    free(aux->Lista);
    free(aux);
}

#endif