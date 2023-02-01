/*23. Fac ̧a um programa que leia uma matriz A de tamanho 3 x 3 e calcule B = A2
.*/
#include <stdio.h>

int main()
{
    int a[3][3],b[3][3],i,k,j;

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
        k=0;
        for(j=0;j<3;j++)
        {
            b[i][j] = a[i][0]*a[0][k] + a[i][1]*a[1][k] + a[i][2]*a[2][k];
            k++;
        }
    }

    printf("A ao quadrado:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d, ",b[i][j]);

        }
        printf("\n");
    }
    return 0;
}
