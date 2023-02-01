/*4. Leia uma matriz 4 x 4, imprima a matriz e retorne a localizac ̧ao (linha e a coluna) do  ̃
maior valor.*/
#include <stdio.h>
int main()
{
    int mat[4][4],i=0,j=0,maior,linhamaior,colunamaior;
    printf("Informe o valor de 0,0: ");
    scanf("%d",&mat[0][0]);
    maior = mat[0][0];
    linhamaior =0;
    colunamaior=0;

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            if(i==0&&j==0)
            {
                j++;
            }
            printf("Valor da posicao %d,%d: ",i,j);
            scanf("%d",&mat[i][j]);
            if(mat[i][j]>maior)
            {
                maior = mat[i][j];
                linhamaior = i+1;
                colunamaior =j+1;
            }

        }
    }

    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    i++;
    j++;
    printf("\n O maior elemento esta na posicao %d,%d da matriz.",linhamaior,colunamaior);
    return 0;
}
