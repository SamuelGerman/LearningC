/*31. Fac ̧a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a uniao ̃
entre os 2 vetores anteriores, ou seja, que contem os n  ́ umeros dos dois vetores. N  ́ ao ̃
deve conter numeros repetidos.  ́*/
#include <stdio.h>
int main()
{
    int v1[5],v2[5],uniao[10],i,j=0,iguais=0;

    printf("10 valores: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&v1[i]);
    }

    printf("Mais 10 valores: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&v2[i]);
    }

    for(i=0; i<5;i++)
    {
        uniao[i]=v1[i];
    }

    for(i=5; i<10;i++)
    {
        uniao[i]=v2[j];
        j++;
    }


    for(i=0;i<10;i++)
    {
        iguais=0;
        for(j=0;j<10;j++)
        {
            if(uniao[i]==uniao[j]&& i!=j)
                iguais++;
        }
        if(iguais<1)
            printf("%d, ",uniao[i]);
    }

    return 0;
}
