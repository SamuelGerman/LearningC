/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se
encontram o maior e o menor valor.*/

#include <stdio.h>

int main()
{
    int vet[5],i,indicemaior,indicemenor,maior,menor;

    printf("Informe 5 valores: ");
    scanf("%d",&vet[0]);
    maior = vet[0];
    indicemaior = 0;
    menor = vet[0];
    indicemenor = 0;

    for(i=1;i<5;i++)
    {
        scanf("%d",&vet[i]);
        if(vet[i]>maior)
        {
            maior = vet[i];
            indicemaior = i;
        }
        else if(vet[i]<menor)
        {
            menor = vet[i];
            indicemenor = i;
        }
    }

    printf("O maior valor %d esta na posicao %d e o menor valor %d esta na posicao %d",maior,indicemaior,menor,indicemenor);
    return 0;
}



