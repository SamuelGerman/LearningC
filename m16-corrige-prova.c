/*  16. Fac ̧a um programa para corrigir uma prova com 10 questoes de m  ̃ ultipla escolha (  ́ a, b,
c, d ou e), em uma turma com 3 alunos. Cada questao vale 1 ponto. Leia o gabarito, e  ̃
para cada aluno leia sua matricula (numero inteiro) e suas respostas. Calcule e escreva:  ́
Para cada aluno, escreva sua matr ́ıcula, suas respostas, e sua nota. O percentual de
aprovac ̧ao, assumindo m  ̃ edia 7.0.  ́*/
#include <stdio.h>
int main()
{
    int notas[3]={0,0,0},matriculas[3],i,j;
    float aprovados=0;
    char resp[3][10],gabarito[10]={'a','a','a','a','a','a','a','a','a','a'};
    for(int k=0;k<3;k++)
    {
        printf("Matricula aluno %d: ",k+1);
        scanf("%d",&matriculas[k]);
    }
    for(i=0;i<3;i++)
    {
        printf("Aluno %d\n",matriculas[i]);
        for(j=0;j<10;j++)
        {
            printf("Questao %d: ",j+1);
            setbuf(stdin, NULL);
            scanf("%c",&resp[i][j]);
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<10;j++)
        {
            if(resp[i][j]==gabarito[j])
            {
                notas[i]++;
            }
        }
    }

    for(i=0;i<3;i++)
    {
        printf("Matricula: %d\n",matriculas[i]);
        for(j=0;j<10;j++)
        {
            printf("Resposta questao %d: %c\n",j+1,resp[i][j]);
        }
        printf("Nota: %d\n",notas[i]);
        if(notas[i]>=7)
        {
            aprovados++;
        }
    }
    aprovados = (aprovados/3)*100;
    printf("Taxa de aprovacao = %f por cento",aprovados);

    return 0;
}
