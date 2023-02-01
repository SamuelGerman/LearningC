/*13. Gere matriz 4 x 4 com valores no intervalo [1, 20]. Escreva um programa que transforme
a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os ele-
mentos acima da diagonal principal. Imprima a matriz original e a matriz transformada.*/
#include <stdio.h>
int main()
{
    int mat[4][4],i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("Valor da posicao %d,%d (o valor deve ser de 1 a 20)",i,j);
            do
            {
              scanf("%d",&mat[i][j]);
            }while(mat[i][j]>20 || mat[i][j]<1);

        }
    }
    printf("Matriz original: \n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("Matriz triangular inferior: \n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(j>i)
            {
                mat[i][j]=0;
            }
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}
