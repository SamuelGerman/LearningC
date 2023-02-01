/*24 maior produto possivel*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int matriz[20][20];
    int i,j,maior,produto;
    for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
        {
            matriz[i][j]= rand() %1000;
        }
	}

    maior=1;
    for (i = 0; i < 20; i++)
	{
		for (j = 0; j < 20; j++)
		{
			if (i < 17)//baixo
			{
				produto = matriz[i][j] * matriz[i+1][j] *  matriz[i+2][j] * matriz[i+3][j];
				if (produto > maior)
				{
					maior = produto;
				}
			}
			if (j > 2 && i < 17) //diagonal baixo-direita
			{
				produto = matriz[i][j] * matriz[i+1][j-1] * matriz[i+2][j-2] * matriz[i+3][j-3];
				if (produto > maior)
				{
					maior = produto;
				}
			}
			if (j < 17) //direita
			{
				produto = matriz[i][j] * matriz[i][j+1] * matriz[i][j+2] * matriz[i][j+3];
				if (produto > maior)
				{
					maior = produto;
				}
			}
			if (j < 17 && i < 17) // diagonal baixo-esquerda
			{
				produto = matriz[i][j] * matriz[i+1][j+1] * matriz[i+2][j+2] * matriz[i+3][j+3];
				if (produto > maior)
				{
					maior = produto;
				}
			}
		}
	}

	printf("Produto maior: %d",maior);


    return 0;
}
