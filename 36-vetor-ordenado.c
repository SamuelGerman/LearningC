/*36. Leia um vetor com 10 numeros reais, ordene os elementos deste vetor, e no final escreva  ́
os elementos do vetor ordenado.*/
#include<stdio.h>
int main()
{
    int val[10],i,indicemenor,ordenado[10],j,menor;
    printf("10 valores: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&val[i]);
    }

    for(i=0;i<10;i++)
    {
        menor=val[i];
        for(j=i+1;j<10;j++)
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
    printf("Vetor ordenado: ");
    for(i=0;i<10;i++)
    {
        printf("%d, ",ordenado[i]);
    }



    return 0;
}
