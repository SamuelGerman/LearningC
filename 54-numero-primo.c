/*54. Fac ̧a um programa que receba um numero inteiro maior do que 1, e verifique se o n  ́ umero  ́
fornecido e primo ou n  ́ ao.  ̃́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int val,divisores=0;
    printf("Informe um valor: ");
    scanf("%d",&val);

    for(int i = 1 ; i<=val;i++)
    {
        if(val%i==0)
        {
            divisores++;
        }
    }
    if(divisores==2 || val ==1)
    {
        printf("%d eh primo",val);
    }else
    {
        printf("%d nao eh primo",val);
    }

   return 0;
}
