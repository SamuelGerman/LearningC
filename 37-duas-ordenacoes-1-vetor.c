/*37. Considere um vetor A com 11 elementos onde A1 < A2 < · · · < A6 > A7 > A8 >
· · · > A11, ou seja, esta ordenado em ordem crescente at  ́ e o sexto elemento, e a partir  ́
desse elemento esta ordenado em ordem decrescente. Dado o vetor da quest  ́ ao anterior,  ̃
proponha um algoritmo para ordenar os elementos.*/
#include<stdio.h>
int main()
{
    int val[11],i,indicemenor,ordenado[11],j,menor,maior,indicemaior;
    printf("11 valores: ");
    for(i=0;i<11;i++)
    {
        scanf("%d",&val[i]);
    }

    for(i=0;i<5;i++)
    {
        menor=val[i];
        for(j=i+1;j<5;j++)
        {
            if(val[j]<menor)
            {
                menor = val[j];
                indicemenor=j;
            }
        }
        if(val[i]!=menor)// se o valor que eu tinha como menor nao é mais o menor,
         {
             val[indicemenor]=val[i];//efetua a troca de indices do valor menor antigo com o novo menor encontrado
         }
         ordenado[i]=menor;
    }

    for(i=5;i<11;i++)
    {
        maior=val[i];
        for(j=i+1;j<11;j++)
        {
            if(val[j]>maior)
            {
                maior = val[j];
                indicemaior=j;
            }
        }
        if(val[i]!=maior)// se o valor que eu tinha como menor nao é mais o menor,
         {
             val[indicemaior]=val[i];//efetua a troca de indices do valor menor antigo com o novo menor encontrado
         }
         ordenado[i]=maior;
    }
    for(i=0;i<11;i++)
    {
        printf("%d, ",ordenado[i]);
    }

    return 0;
}
