/*36. Fac ̧a um programa que calcule a diferenc ̧a entre a soma dos quadrados dos primeiros
100 numeros naturais e o quadrado da soma. Ex: A soma dos quadrados dos dez pri-  ́
meiros numeros naturais  ́ e,  ́
1
2 + 22 + ... + 102 = 385
O quadrado da soma dos dez primeiros numeros naturais  ́ e,  ́
(1 + 2 + ... + 10)2 = 552 = 3025

A diferenc ̧a entre a soma dos quadrados dos dez primeiros numeros naturais e o qua-  ́
drado da soma e 3025-385 = 2640.  ́*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int somaquad=0,quadsoma=0,dif,dif2,i;

  for(i=1; i<=10 ; i++)
  {
      somaquad = somaquad + i*i;
  }

  for(i=0; i<=10; i++)
  {
      quadsoma = quadsoma + i;
  }
quadsoma = quadsoma*quadsoma;
dif = somaquad - quadsoma;
dif2 = quadsoma - somaquad;
printf("A diferenca entre a soma dos quadrados e o quadrado da soma dos dez primeiros numeros naturais eh %d\n",dif);
printf("A diferenca entre a soma dos quadrados e o quadrado da soma dos dez primeiros numeros naturais eh %d",dif2);

   return 0;
}
