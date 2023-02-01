/*7. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos sao da forma:  ̃
A[i][j] = 2i + 7j − 2 se i < j;
A[i][j] = 3i²   − 1 se i = j;
A[i][j] = 4i³ − 5j² + 1 se i > j.*/
#include <stdio.h>
#include <math.h>
int main ()
{
    int mat[10][10],i,j;

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(i<j)
            {
                mat[i][j]=2*(i+1) + 7*(j+1) - 2;
            }
            else if(i==j)
            {
                mat[i][j]= 3*(pow((i+1),2)) - 1;
            }
            else if(i>j)
            {
                mat[i][j]=4*(pow((i+1),3)) - 5*(pow((j+1),2)) +1;
            }
        }
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d \t",mat[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}
