/*9. Leia uma matriz de 3 x 3 elementos. Calcule a soma dos elementos que estao abaixo da  ̃
diagonal principal.*/
#include <stdio.h>
int main()
{
    int mat[3][3],i,j,soma=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Valor em %d,%d: ",i,j);
            scanf("%d",&mat[i][j]);
        }

    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(j<i)
            {
                soma+= mat[i][j];
            }
        }

    }
    printf("Soma = %d.",soma);
    return 0;
}
