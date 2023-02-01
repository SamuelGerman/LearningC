
/*55.SOMA PRIMOS 2M  ́̃́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int divisores,soma=17;


    for(int i=8 ; i<2000000;i++)
    {
        if(i % 2 && i % 3 && i % 5 && i % 7)
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

    }
    printf("Soma=%d",soma);
   return 0;
}
