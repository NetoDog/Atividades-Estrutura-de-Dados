#ifndef INVERTER_FILA_H
#define INVERTER_FILA_H

void inverterFila(pDFila pdf){
    void* info;

    info = desenfileirarInfo(pdf);
    if(info != NULL){
        inverterFila(pdf);
        enfileirarInfo(pdf,info);
    }
}

#endif