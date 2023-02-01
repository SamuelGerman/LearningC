/*15. Leia uma matriz 5 x 10 que se refere respostas de 10 questoes de m  ̃ ultipla escolha,  ́
referentes a 5 alunos. Leia tambem um vetor de 10 posic ̧  ́ oes contendo o gabarito de  ̃
respostas que podem ser a, b, c ou d. Seu programa devera comparar as respostas  ́
de cada candidato com o gabarito e emitir um vetor denominado resultado, contendo a
pontuac ̧ao correspondente a cada aluno.  ̃*/
#include <stdio.h>
#include <string.h>
int main()
{
    int acertos[5]={0,0,0,0,0},i,j;
    char resp[5][10],gabarito[10]={'a','b','c','a','a','a','a','a','a','a'};

    for (i = 0; i < 5; i++)
	{
		printf("Aluno %d\n", i+1);
		for (j = 0; j < 10; j++)
		{
			printf("Questao %d: ", j+1);
			setbuf(stdin, NULL);
			scanf(" %c", &resp[i][j]);
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(resp[i][j]==gabarito[j])
            {
                acertos[i]++;
            }
		}
	}

	for(i=0;i<5;i++)
    {
        printf("Aluno %d. Nota = %d\n\n",i+1,acertos[i]);
    }




    return 0;
}

