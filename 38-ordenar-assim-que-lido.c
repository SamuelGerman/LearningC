/*38. Pec ̧a ao usuario para digitar dez valores num  ́ ericos e ordene por ordem crescente esses  ́
valores, guardando-os num vetor. Ordene o valor assim que ele for digitado. Mostre ao
final na tela os valores em ordem.*/
#include <stdio.h>
int main()
{
    int val[10],ordenado[10],i,j,menor,indicemenor;

    printf("Informe 10 valores: ");
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
                menor=val[j];
                indicemenor=j;
            }
        }
        if(val[i]!=menor)
        {
            val[indicemenor]=val[i];
        }
        ordenado[i]=menor;
    }
    printf("Ordenado: ");
    for(i=0;i<10;i++)
    {
        printf("%d, ",ordenado[i]);
    }



    return 0;
}
