/*15. Leia um vetor com 20 numeros inteiros. Escreva os elementos do vetor eliminando ele-  ́
mentos repetidos.*/
#include <stdio.h>
int main()
{
    int vet[20],i,j,repet;

    printf("Digite 20 numeros: ");
    for(i=0;i<20;i++)
    {
        scanf("%d",&vet[i]);
    }

    for(i=0;i<20;i++)
    {
        repet=0;
        for(j=0;j<20;j++)
        {
            if(vet[i]==vet[j]&&j!=i)
            {
                repet++;
            }
        }
        if(repet <1)
        {
            printf("%d nao repetiu\n",vet[i]);
        }
    }

    return 0;
}
