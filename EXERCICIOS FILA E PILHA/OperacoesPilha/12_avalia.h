#ifndef AVALIA_PILHA_H
#define AVALIA_PILHA_H

//execucao apenas com uma pilha lendo a expressao de tras para frente.
//expressao apenas com numeros inteiros de 1 digito e retorno em float
float avalia(char* expr){
    pDPilha pdpoperando = criarPilha(); 
    void * valor1;
    void * valor2;
    float resultado = 0;
    int i = strlen(expr)-1;
    
    while(i >= 0){
        if(expr[i] >= '0' && expr[i] <= '9'){
            empilharInfo(pdpoperando, alocaFloat(expr[i] - 48));
        }
        else{
            valor1 = desempilharInfo(pdpoperando);
            valor2 = desempilharInfo(pdpoperando);
            switch(expr[i]){
                case '+':
                    resultado = (*(float*)valor1) + (*(float*)valor2);
                    break;
                case '-':
                    resultado = (*(float*)valor1) - (*(float*)valor2);
                    break;
                case '*':
                    resultado = (*(float*)valor1) * (*(float*)valor2);
                    break;
                case '/':
                    resultado = (*(float*)valor1) / (*(float*)valor2);
                    break;
            }

            liberaFloat(valor1);
            liberaFloat(valor2);

            empilharInfo(pdpoperando,alocaFloat(resultado));
        }
        i--;
    }

    liberaFloat(desempilharInfo(pdpoperando));
    return resultado;

}

#endif
