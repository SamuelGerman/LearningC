/*18. Fac ̧a um programa que leia um vetor de 10 numeros. Leia um n  ́ umero  ́ x. Conte os
multiplos de um n  ́ umero inteiro  ́ x num vetor e mostre-os na tela.*/
#include <stdio.h>
int main()
{
    int multiplos[10],i,x;

    printf("Informe x: ");
    scanf("%d",&x);

    printf("Os 10 primeiros multiplos de %d sao: ",x);

    for(i=0;i<10;i++)
    {
        multiplos[i]=x*i;
        printf("%d, ",multiplos[i]);
    }

    return 0;
}
