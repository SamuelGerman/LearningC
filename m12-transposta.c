//12. Leia uma matriz de 3 x 3 elementos. Calcule e imprima a sua transposta.
#include <stdio.h>
int main()
{
    int mat[3][3],transposta[3][3],i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Valor em %d,%d: ",i,j);
            scanf("%d",&mat[i][j]);
        }

    }
    printf("Matriz: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[i][j]);

        }
        printf("\n");

    }
    printf("Matriz transposta: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[j][i]);

        }
        printf("\n");

    }


    return 0;
}
