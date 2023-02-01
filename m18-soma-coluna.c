/*18. Fac ̧a um programa que permita ao usuario entrar com uma matriz de 3 x 3 n  ́ umeros  ́
inteiros. Em seguida, gere um array unidimensional pela soma dos numeros de cada  ́
coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:*/
#include <stdio.h>
int main()
{
    int mat[3][3],vet[3]={0,0,0},i,j,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Posicao %d,%d: ",i+1,j+1);
            {
                scanf("%d",&mat[i][j]);
            }
        }
    }
    k=0;

    for(j=0;j<3;j++)
    {
        for(i=0;i<3;i++)
        {
            vet[j]+=mat[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        printf("%d, ",vet[i]);
    }

    return 0;
}
