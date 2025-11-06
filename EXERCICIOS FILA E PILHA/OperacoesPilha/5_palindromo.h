#ifndef PALINDROMO_PILHA_H
#define PALINDROMO_PILHA_H

int palindromo (char* palavra){

	int i = 0;
	pDPilha pdp = criarPilha();
	
	while(palavra[i] != '\0'){
		empilharInfo(pdp, &palavra[i]);
		i++;
	}
	
	i = 0;
	while(palavra[i] != '\0'){
		if(palavra[i] != *((char*) desempilharInfo(pdp))){
			free(pdp->Lista);
			free(pdp);
			return 0;
		}
			
        i++;
	}
	
	free(pdp->Lista);
	free(pdp);
	
	return 1;
}
	
#endif
