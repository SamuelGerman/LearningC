/*34. Fac ̧a um programa para ler 10 numeros DIFERENTES a serem armazenados em um  ́
vetor. Os dados deverao ser armazenados no vetor na ordem que forem sendo lidos,  ̃
sendo que caso o usuario digite um n  ́ umero que j  ́ a foi digitado anteriormente, o programa  ́
devera pedir para ele digitar outro n  ́ umero. Note que cada valor digitado pelo usu  ́ ario  ́
deve ser pesquisado no vetor, verificando se ele existe entre os numeros que j  ́ a foram  ́
fornecidos. Exibir na tela o vetor final que foi digitado.*/
#include<stdio.h>
int main()
{
    int val[10],i,j,repet;
    printf("Informe 10 valores diferentes: ");

    for(i=0;i<10;i++)
    {
        scanf("%d",&val[i]);
        repet=0;
        for(j=0;j<i;j++)
        {
            if(val[i]==val[j]&&i!=j)
            {
                repet=1;
            }
        }
        if(repet==1)
        {
            printf("Numero ja lido, favor informar outro diferente: ");
            i--;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d, ",val[i]);
    }


    return 0;
}
