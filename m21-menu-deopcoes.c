/*21. Fac ̧a um programa que leia duas matrizes 2 x 2 com valores reais. Oferec ̧a ao usuario  ́
um menu de opc ̧oes:  ̃*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mat2[2][2],mat1[2][2],i,j,cte,opcao,result[2][2],subtracao[2][2];

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Posicao %d,%d: ",i+1,j+1);
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("\nInforme a segunda matriz:\n\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("Posicao %d,%d: ",i+1,j+1);
            scanf("%d",&mat2[i][j]);
        }
    }

    printf("Selecione:\n (1) Para somar duas matrizes\n (2) Para subtrair a primeira matriz da segunda\n (3) Para adicionar uma constante às duas matrizes\n (4) Para imprimir as duas matrizes\n OPCAO: ");
    scanf("%d",&opcao);
    if(opcao<1 || opcao>4)
    {
        printf("Opcao invalida.");
        exit(0);
    }

    switch(opcao)
    {
        case 1:
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    result[i][j]=mat1[i][j]+mat2[i][j];
                    printf("%d, ",result[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:

            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    subtracao[i][j]=mat1[i][j]-mat2[i][j];
                    printf("%d, ",subtracao[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            printf("Informe a constante a ser adicionada: ");
            scanf("%d",&cte);
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    mat1[i][j]+=cte;
                    printf("%d, ",mat1[i][j]);
                }
                printf("\n");
            }

            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    mat2[i][j]+=cte;
                    printf("%d, ",mat2[i][j]);
                }
                printf("\n");
            }

            break;

        case 4:
            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    printf("%d, ",mat1[i][j]);
                }
                printf("\n");
            }

            for(i=0;i<2;i++)
            {
                for(j=0;j<2;j++)
                {
                    printf("%d, ",mat2[i][j]);
                }
                printf("\n");
            }




    }



    return 0;
}
