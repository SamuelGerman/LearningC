/*14. Fac ̧a um programa que leia um vetor de 10 posic ̧oes e verifique se existem valores iguais  ̃
e os escreva na tela.*/

#include <stdio.h>

int main()
{
    int vet[10],i,j;

    printf("Informe 10 valores: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&vet[i]);
    }

    printf("Valores repetidos: \n");

    for(i=0;i<10;i++)
    {
       for(j=0;j<i;j++)
       {
           if(vet[i]==vet[j])
           {
               printf("%d, ",vet[j]);
           }
       }
    }

    return 0;
}
