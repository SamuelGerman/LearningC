/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores
lidos juntamente com o maior, o menor e a média dos valores.*/

#include <stdio.h>

int main()
{
    int vet[5],maior,menor,soma,i;
    float media;

    printf("Informe 5 valores: ");
    scanf("%d",&vet[0]);

    maior =vet[0];
    menor =vet[0];
    soma = vet[0];

    for(i=1;i<5;i++)
    {
        scanf("%d",&vet[i]);
        if(vet[i]>maior)
        {
            maior=vet[i];
        }
        else if(vet[i]<menor)
        {
            menor=vet[i];
        }
        soma+= vet [i];
    }
    media = soma/i;

    printf("Os valores lidos foram: \n");
    for(i=0;i<5;i++)
    {
        printf("%d, ",vet[i]);
    }
    printf("Maior valor = %d\nMenor valor = %d\nMedia dos valores = %f",maior,menor,media);
    return 0;
}



