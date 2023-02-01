/*6. Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada posic ̧ao ̃
das matrizes lidas.*/
#include <stdio.h>
int main()
{
    int mat1[4][4],mat2[4][4],mat3[4][4],i,j,maior;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Valor da posicao %d,%d ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Valor da posicao  %d,%d da segunda matriz: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(mat1[i][j]>=mat2[i][j])
            {
                mat3[i][j]= mat1[i][j];
            }else{
                mat3[i][j]=mat2[i][j];
            }
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
