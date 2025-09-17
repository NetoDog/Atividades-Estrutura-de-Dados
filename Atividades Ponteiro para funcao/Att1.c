#include <stdio.h>
#include <math.h>
#include "C:\Users\Windows 10 pro\Documents\GitHub\Atividades-Estrutura-de-Dados\Utils.h"

int main()
{
    void *a[2];

    a[0] = alocaInt (5);
    a[1] = alocaInt (4);
    int *b = comparaInt(a[0],a[1]);
    printf("catapimbas :%d",*b);
    
    return 0;
}