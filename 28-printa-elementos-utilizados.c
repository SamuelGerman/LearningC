/*28. Leia 10 numeros inteiros e armazene em um vetor  ́ v. Crie dois novos vetores v1 e v2.
Copie os valores  ́ımpares de v para v1, e os valores pares de v para v2. Note que cada
um dos vetores v1 e v2 tem no m ˆ aximo 10 elementos, mas nem todos os elementos s  ́ ao ̃
utilizados. No final escreva os elementos UTILIZADOS de v1 e v2.*/
#include <stdio.h>
int main()
{
    int v[10],v2[10],v1[10],i,qtdpar=0,qtdimpar=0;
    printf("Digite 10 numeros: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&v[i]);
    }

    for(i=0;i<10;i++)
    {
        if(v[i]%2==0)
        {
            v2[qtdpar]=v[i];
            qtdpar++;
        }else{
            v1[qtdimpar]=v[i];
            qtdimpar++;
        }
    }
    printf("Impares: ");
    for(i=0;i<qtdimpar;i++)
    {
        printf("%d, ",v1[i]);
    }
    printf("\n\npares: ");
    for(i=0;i<qtdpar;i++)
    {
        printf("%d, ",v2[i]);
    }


        return 0;
}
