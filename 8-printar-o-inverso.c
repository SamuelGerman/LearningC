/*8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos na ordem inversa.*/

#include <stdio.h>

int main()
{
    int vet[6],i;

    printf("Informe 6 valores: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&vet[i]);
    }

    for(i=5;i>=0;i--)
    {
        printf("%d, ",vet[i]);
    }
    return 0;
}
