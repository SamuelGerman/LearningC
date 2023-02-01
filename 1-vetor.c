
#include <stdio.h>

int main()
{
   int A[6]={1,0,5,-2,-5,7};
   int soma=0;

   soma = A[0] + A[1] + A[5];
   printf("Soma = %d\n \n",soma);
   A[4] = 100;
   printf("A[4] = %d\n\n",A[4]);

   for(int i = 0; i<6; i++)
   {
       printf("Valor do indice %d = %d\n",i,A[i]);
   }


    return 0;
}
