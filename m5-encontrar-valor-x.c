/*5. Leia uma matriz 5 x 5. Leia tambem um valor  ́ X. O programa devera fazer uma busca  ́
desse valor na matriz e, ao final, escrever a localizac ̧ao (linha e coluna) ou uma mensa-  ̃
gem de “nao encontrado”.  ̃*/
#include <stdio.h>
int main()
{
    int mat[5][5],i,j,x,achou=0;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Posicao %d, %d: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("Informe x: ");
    scanf("%d",&x);

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(x==mat[i][j])
            {
                achou=1;
                i++;
                j++;
                printf("%d esta na posicao %d, %d da matriz\n ",x,i,j);
            }
        }
    }
    if(achou==0)
    {
        printf("\n Numero nao encontrado");
    }

    return 0;
}
