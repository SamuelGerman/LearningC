/*14. Fac ̧a um programa para gerar automaticamente numeros entre 0 e 99 de uma cartela de  ́
bingo. Sabendo que cada cartela devera conter 5 linhas de 5 n  ́ umeros, gere estes dados  ́
de modo a nao ter n  ̃ umeros repetidos dentro das cartelas. O programa deve exibir na  ́
tela a cartela gerada.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cartela[5][5],i,j,num[25],repet,k;

    for(i=0;i<25;i++)
    {
        num[i]= rand() %99;
        repet=0;
        for(j=0;j<25;j++)
        {
            if(num[i]==num[j]&&j!=i)
            {
                repet=1;
            }
        }
        if(repet==1)
        {
            num[i]=rand() %99;
            i--;
        }
    }

    k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cartela[i][j]=num[k];
            k++;
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",cartela[i][j]);
        }
        printf("\n");
    }

    return 0;
}
