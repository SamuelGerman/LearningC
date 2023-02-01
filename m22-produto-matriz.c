/*22. Fac ̧a um programa que leia duas matrizes A e B de tamanho 3 x 3 e calcule C = A ∗ B.*/
#include <stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,k,c[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Posicao %d,%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Posicao %d,%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        k=0;
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][0]*b[0][k] + a[i][1]*b[1][k] + a[k][2]*b[2][k];
            k++;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d, ",c[i][j]);

        }
        printf("\n");
    }

    return 0;
}
