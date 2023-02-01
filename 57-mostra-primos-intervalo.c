/*57. Fac ̧a um programa que conte quantos numeros primos existem entre  ́ a e b, onde a e b
sao n  ̃ umeros informados pelo usu  ́ ario.  ́́̃́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,divisores,i;
    do
    {
        printf("Inicio do intervalo: ");
        scanf("%d",&a);
        printf("fim do intervalo: ");
        scanf("%d",&b);
    }while(b<=a);

    for(int i=a+1;i<b;i++)
    {
        divisores=0;
        for(int j = 1 ; j<=i;j++)
        {
            if(i%j==0)
            {
            divisores++;
            }
        }

        if(divisores ==2)
        {
            printf("%d ",i);
        }
    }

   return 0;
}
