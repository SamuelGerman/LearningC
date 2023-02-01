/*9. Crie um programa que lê 6 valores inteiros pares e, em seguida, mostre na tela os
valores lidos na ordem inversa.*/

#include <stdio.h>

int main()
{
    int val,vet[6],i,j=0;

    printf("Informe 6 numeros pares: ");
    for(i=0;j<6;i++)
    {
        scanf("%d",&val);
        if(val%2==0)
        {
            vet[j]=val;
            j++;
        }
    }

    for(j=5;j>=0;j--)
    {
        printf("%d, ",vet[j]);
    }
    return 0;
}
