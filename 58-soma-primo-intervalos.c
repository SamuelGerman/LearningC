/*58. Fac ̧a um programa que some os numeros primos existentes entre  ́ a e b, onde a e b sao ̃
numeros informados pelo usu  ́ ario.  ́*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,divisores,i,soma=0;
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

           soma+=i;

        }
    }
printf("Soma =%d ",soma);
   return 0;
}
