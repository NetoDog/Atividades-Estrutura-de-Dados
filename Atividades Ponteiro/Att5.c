/*5. [PONTEIRO COM STRUCT] Escreva um programa em C que leia duas datas (dia, me s e ano) e calcule a diferença de dias entre as duas datas.
Utilize um tipo de dado heteroge neo (struct) para representar a data.
O ca lculo da diferença de dias entre as datas deve ser implementado como uma funça o.
int diferencaDias(struct Data *data1, struct Data *data2)*/

#include <stdio.h>
#include <stdlib.h>


typedef struct data 
{
    int dia;
    int mes;
    int ano;
}Data;

int diferencaDias (Data *dt1, Data *dt2 )
{
   int dias1 = dt1->ano * 365 + dt1->mes * 30 + dt1 ->dia;
   int dias2 = dt2->ano * 365 + dt2->mes * 30 + dt2 ->dia;

   int dif = dias1 - dias2;
   if (dif < 0)
   dif = -dif;

   return dif;

}


int main()
{
    Data *pdt1, *pdt2;
    pdt1 = malloc(sizeof(Data));
    pdt2 = malloc(sizeof(Data));

    printf("Insira data 1:");
    scanf("%d",&pdt1->dia);
    scanf("%d",&pdt1->mes);
    scanf("%d",&pdt1->ano);

    printf("Insira data 2:");
    scanf("%d",&pdt2->dia);
    scanf("%d",&pdt2->mes);
    scanf("%d",&pdt2->ano);

    int diasdiferenca = diferencaDias(pdt1,pdt2);

    printf("A diferenca total de dias e:%d",diasdiferenca);




    return 0;
}
