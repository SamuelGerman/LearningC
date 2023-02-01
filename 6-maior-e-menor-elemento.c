/*6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida
deverá ser impresso o maior e o menor elemento do vetor.*/
#include <stdio.h>

int main()
{
    int i,maior,menor,vet[10];
    printf("Valor do indice 0: ");
    scanf("%d",&vet[0]);
    maior = vet[0];
    menor = vet[0];

    for(i=1;i<10;i++)
    {
        printf("Valor do indice %d: ",i);
        scanf("%d",&vet[i]);
        if(vet[i] > maior)
        {
            maior = vet[i];
        }

        else if(vet[i] < menor)
        {
            menor = vet[i];
        }
    }
  printf("Menor = %d \n Maior = %d",menor,maior);
    return 0;
}
