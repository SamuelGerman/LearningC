/*25-jogo da velha*/
#include <stdio.h>
int main()
{
    int mat[3][3]={0,0,0,0,0,0,0,0,0},i,j,k,linha,incluido,coluna;

    printf("Jogador 1: -1\nJogador 2: 1\n\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    for(k=0;k<9;k+=2)
    {
        do
        {
            incluido=0;
            printf("Linha: ");
			scanf("%d", &linha);
			printf("Coluna: ");
			scanf("%d", &coluna);

			if(mat[linha][coluna] == 0)
            {
                mat[linha][coluna] = 1;
                incluido=1;
            }
        }while(incluido=0);

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        if (k == 9)
        {
            break;
        }

        do
        {
            incluido=0;
            printf("Linha: ");
			scanf("%d", &linha);
			printf("Coluna: ");
			scanf("%d", &coluna);

			if(mat[linha][coluna] == 0)
            {
                mat[linha][coluna] = -1;
                incluido=1;
            }
        }while(incluido=0);

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",mat[i][j]);
            }
            printf("\n");
        }
        if (k == 9)
        {
            break;
        }
    }



    return 0;
}
