/*47. Fac ̧a um programa que apresente um menu de opc ̧oes para o c  ̃ alculo das seguintes  ́
operac ̧oes entre dois n  ̃ umeros:  ́
• adic ̧ao (opc ̧  ̃ ao 1)  ̃
• subtrac ̧ao (opc ̧  ̃ ao 2)  ̃
• multiplicac ̧ao (opc ̧  ̃ ao 3)  ̃
• divisao (opc ̧  ̃ ao 4).  ̃
• sa ́ıda (opc ̧ao 5)  ̃̃́́́́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val1,val2,opcao,soma,dif,produto;
    float divisao;
    printf("Informe dois numeros e depois seleciona a operacao que deseja fazer: ");
    scanf("%d""%d",&val1,&val2);

    do
    {
        do
    {
        printf("1- Adicao \n2- Subtracao\n3- multiplicacao\n4- divisao\n5- saida\n Opcao: ");
        scanf("%d",&opcao);
    }while(opcao <1 || opcao >5);

    switch(opcao)
    {
        case 1:
        soma = val1 + val2;
        printf("Soma = %d\n",soma);
        break;

        case 2:
        dif = val1 - val2;
        printf("Diferenca = %d\n",dif);
        break;

        case 3:
        produto = val1 * val2;
        printf("produto = %d\n",produto);
        break;

        case 4:
        divisao = val1 / val2;
        printf("Divisao = %f\n",divisao);
        break;



    }
    }while(opcao!=5);



   return 0;
}
