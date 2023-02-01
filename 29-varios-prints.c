/*29. Fac ̧a um programa que receba 6 numeros inteiros e mostre:  ́
• Os numeros pares digitados;  ́
• A soma dos numeros pares digitados;  ́
• Os numeros  ́  ́ımpares digitados;
• A quantidade de numeros  ́  ́ımpares digitados;*/
#include <stdio.h>
int main()
{
    int val[6],i,somapar=0,impares[6],qtdimpar=0;

    printf("Informe 6 valores: ");
    for(i=0;i<6;i++)
    {
        scanf("%d",&val[i]);
    }

    printf("Numeros pares: ");
    for(i=0;i<6;i++)
    {
        if(val[i]%2==0)
        {
            somapar+=val[i];
            printf("%d, ",val[i]);
        }

    }
    printf("\nSoma dos pares: %d",somapar);

    printf("\nNumeros impares: ");
    for(i=0;i<6;i++)
    {
        if(val[i]%2!=0)
        {
            qtdimpar++;
            printf("%d, ",val[i]);
        }

    }
    printf("\nQuantidade de impares: %d",qtdimpar);
    return 0;
}
