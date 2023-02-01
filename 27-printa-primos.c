/*27. Leia 10 numeros inteiros e armazene em um vetor. Em seguida escreva os elementos  ́
que sao primos e suas respectivas posic ̧  ̃ oes no vetor.  ̃*/
#include <stdio.h>
int main()
{
    int val[10],i,j,divisores=0;

    printf("Informe 10 numeros: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&val[i]);
    }
    for(i=0;i<10;i++)
    {
        divisores=0;
        for (j = 1; j <= val[i]; j++)
        {
            if (val[i] % j == 0)
			{
				divisores++;
			}
        }

        if(divisores ==2)
        {
            printf("O numero %d eh primo e esta na posicao %d\n",val[i],i);
        }
    }

    return 0;
}
