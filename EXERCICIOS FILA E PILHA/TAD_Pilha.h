#ifndef PILHA_TAD_H
#define PILHA_TAD_H
/*------------------------------------------*/
/* tipos de dados                           */
/*------------------------------------------*/
/* descritor da pilha */
typedef struct dPilha  DPilha;
typedef DPilha*        pDPilha;

/*------------------------------------------*/
/* operacoes                                */
/*------------------------------------------*/
pDPilha  criarPilha     ();
void     empilharInfo   (pDPilha, void *);
void*    desempilharInfo(pDPilha);
int      pilhaVazia     (pDPilha);
int      palindromo     (char*);
int      iguais         (pDPilha, pDPilha, FuncaoComparacao);
pDPilha  copiarPilha    (pDPilha, FuncaoAlocacao);
int      balanceamento  (char*, int);
int      removePorInfo  (pDPilha, void*, FuncaoComparacao);
pDPilha  intersecaoPilha(pDPilha, pDPilha, FuncaoComparacao);
void     limparPilha    (pDPilha, FuncaoLiberacao);
float    avalia         (char*);

#endif

