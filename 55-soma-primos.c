/*55. Escreva um programa que leia um inteiro nao negativo  ̃ n e imprima a soma dos n primei-
ros numeros primos.  ́̃́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val,divisores,soma=0;
    printf("Valor: ");
    scanf("%d",&val);

    for(int i=1 ; i<val;i++)
    {
        divisores=0;
        for(int j = 1 ; j<=i;j++)
        {
            if(i%j==0)
            {
            divisores++;
            }

        }
        if(divisores==2)
            {
                soma+=i;
            }
    }
    printf("Soma=%d",soma);
   return 0;
}
