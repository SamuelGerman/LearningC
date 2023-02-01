/*7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor.
Imprima o vetor, o maior elemento e a posição que ele se encontra.*/

#include <stdio.h>

int main()
{
    int vet[10];
    int maior,i,indice;

    printf("Informe 10 numeros: ");
    scanf("%d",&vet[0]);
    maior = vet[0];

    for(i=1;i<10;i++)
    {
        scanf("%d",&vet[i]);
        if(vet[i]>maior)
        {
            maior = vet[i];
            indice = i; // indice é uma variavel auxiliar para printar o indice do maior valor depois
        }

    }

    for(i=0;i<10;i++)
    {
       printf("%d ",vet[i]);
    }
    printf("\n %d foi o maior numero lido e esta no indice %d",maior,indice);


    return 0;
}
