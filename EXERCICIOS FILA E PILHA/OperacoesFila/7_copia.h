#ifndef COPIA_FILA_H
#define COPIA_FILA_H

pDFila copia(pDFila pdf, FuncaoAlocacao fc){
    
    void* info;
    pDFila novaFila = criarFila();
    pDFila aux = criarFila();

    do{
        info = desenfileirarInfo(pdf);
        if(info != NULL){
            enfileirarInfo(novaFila, fc(info));
            enfileirarInfo(aux, info);
        }
    }while(info != NULL);
    
    free(pdf->Lista);
    pdf->Lista = aux->Lista;
    free(aux);

    return novaFila;
}

#endif