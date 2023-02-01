/*3. Fac ̧a um programa que preenche uma matriz 4 x 4 com o produto do valor da linha e da
coluna de cada elemento. Em seguida, imprima na tela a matriz.*/
//Aixj = aij = i*j
#include <stdio.h>
int main()
{
    int val[4][4],i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            val[i][j]=(i+1)*(j+1);
        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",val[i][j]);
        }
        printf("\n");
    }

    return 0;
}
