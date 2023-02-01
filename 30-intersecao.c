/*30. Fac ̧a um programa que leia dois vetores de 10 elementos. Crie um vetor que seja a
intersecc ̧ao entre os 2 vetores anteriores, ou seja, que cont  ̃ em apenas os n  ́ umeros que  ́
estao em ambos os vetores. N  ̃ ao deve conter n  ̃ umeros repetidos.  ́*/
#include<stdio.h>
int main()
{
    int v1[10],v2[10],iguais[10],i,j,qtdiguais=0,repet=0;

    printf("Digite os primeiros 10 valores: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&v1[i]);
    }

    printf("Digite outros 10 valores: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&v2[i]);
    }

    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(v1[i]==v2[j])
            {
                iguais[qtdiguais]=v2[j];
                qtdiguais++;
            }
        }
    }

    for(i=0;i<qtdiguais;i++)
    {
        repet=0;
        for(j=0;j<qtdiguais;j++)
        {
            if(iguais[i]==iguais[j]&&j!=i)
            {
                repet++;
            }
        }
        if(repet<1)
        {
            printf("%d, ",iguais[i]);
        }
    }
    return 0;
}

/*for(i=0;i<20;i++)
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
    }*/
