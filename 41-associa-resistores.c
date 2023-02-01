/*41. Fac ̧a um programa que calcula a associac ̧ao em paralelo de dois resistores  ̃ R1 e R2
fornecidos pelo usuario via teclado. O programa fica pedindo estes valores e calculando  ́
ate que o usu  ́ ario entre com um valor para resist  ́ encia igual a zero. ˆ

R =
R1 ∗ R2
R1 + R2 ́́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float r,r1,r2;
  printf("Valor do primeiro resistor: ");
  scanf("%f",&r1);
  printf("Valor do segundo resistor: ");
  scanf("%f",&r2);
  r = (r1*r2)/(r1 + r2);
  printf("associacao = %f\n",r);

  while(r1 != 0 && r2 != 0)
  {
      printf("Valor do primeiro resistor: ");
      scanf("%f",&r1);
      printf("Valor do segundo resistor: ");
      scanf("%f",&r2);
      r = (r1*r2)/(r1 + r2);
      printf("associacao = %f\n",r);
  }
   return 0;
}
