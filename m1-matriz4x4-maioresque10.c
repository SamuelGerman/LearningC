/*1. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.*/
#include <stdio.h>
int main()
{
    int val[4][4],i,j,maior=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Informe o valor de [%d] [%d]: ",i,j);
            scanf("%d",&val[i][j]);
        }
    }
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(val[i][j]>10)
            {
                maior++;
                printf("%d, ",val[i][j]);
            }
        }
    }
    printf(" Sao os %d valores maiores que 10 da matriz lida. ",maior);

    return 0;
}
