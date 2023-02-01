/*17. Leia uma matriz 10 x 3 com as notas de 10 alunos em 3 provas. Em seguida, escreva
o numero de alunos cuja pior nota foi na prova 1, o n  ́ umero de alunos cuja pior nota foi  ́
na prova 2, e o numero de alunos cuja pior nota foi na prova 3. Em caso de empate  ́
das piores notas de um aluno, o criterio de desempate  ́ e arbitr  ́ ario, mas o aluno deve ser  ́
contabilizado apenas uma vez.*/
#include <stdio.h>
int main()
{
    float notas[10][3],menor=100; //i = aluno, j= nota nas prova
    int i,j,p1=0,p2=0,p3=0,indicemenor;

    for(i=0;i<10;i++)
    {
        printf("Aluno: %d\n",i+1);
        for(j=0;j<3;j++)
        {
            printf("Nota na prova %d: ",j+1);
            scanf("%f",&notas[i][j]);
        }
    }

    for(i=0;i<10;i++)
    {
        printf("Aluno: %d\n",i+1);
        menor=100;
        for(j=0;j<3;j++)
        {
            if(notas[i][j]<menor)
            {
                menor=notas[i][j];
                indicemenor=j;
                if(indicemenor==0)
                {
                    p1++;
                }
                else if(indicemenor==1)
                {
                    p2++;
                }
                else if(indicemenor==2)
                {
                    p3++;
                }
            }
        }
    }

    printf("Menor nota na prova 1:%d\n ",p1);
    printf("Menor nota na prova 2:%d\n ",p2);
    printf("Menor nota na prova 3:%d\n ",p3);


    return 0;
}
