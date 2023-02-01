/*19. Fac ̧a um programa que leia uma matriz de 5 linhas e 4 colunas contendo as seguintes
informac ̧oes sobre alunos de uma disciplina, sendo todas as informac ̧  ̃ oes do tipo inteiro:  ̃*/
#include <stdio.h>
int main()
{
    int info[5][4],i,indmatricula,maior=0,j,k,nfinal[5]={0,0,0,0,0};
    float media=0;

    for(j=0;j<4;j++)
    {
        for(i=0;i<5;i++)
        {
            if(j==0)
            {
                printf("Matricula aluno %d: \n",i+1);
                scanf("%d",&info[i][j]);
            }
            else if(j==1)
            {
                printf("Media das provas do aluno %d: \n",i+1);
                scanf("%d",&info[i][j]);
            }
            else if(j==2)
            {
                printf("Media dos trabalhos do aluno %d: \n",i+1);
                scanf("%d",&info[i][j]);
            }
            else if(j==3)
            {
                info[i][j]=0;
            }

        }
    }

    for(i=0;i<5;i++)
    {
        printf("\nDados aluno %d:\n",i+1);
        for(j=0;j<3;j++)
        {
            if(j==0)
            {
                printf("Matricula: %d \n",info[i][j]);
            }
            else if(j==1)
            {
                printf("Media das provas do aluno: %d \n",info[i][j]);

            }
            else if(j==2)
            {
                printf("Media dos trabalhos do aluno: %d \n",info[i][j]);
            }
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=1;j<3;j++)
        {
            nfinal[i]+=info[i][j];
        }
    }
    k=0;
    for(i=0;i<5;i++)
    {
        for(j=3;j<4;j++)
        {
            info[i][j]=nfinal[i];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=3;j<4;j++)
        {
            if(info[i][j]>maior)
            {
                maior=info[i][j];
                indmatricula=i;
            }
        }
    }

    printf("Maior nota: Matricula %d, Nota %d.\n",info[indmatricula][0],info[indmatricula][3]);

    for(i=0;i<5;i++)
    {
        for(j=3;j<4;j++)
        {
            media+=info[i][j];
        }
    }
    media=media/5;
    printf("Media das notas finais: %f",media);

    return 0;
}
