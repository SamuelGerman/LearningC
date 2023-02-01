/*37. Escreve um programa que verifique quais numeros entre 1000 e 9999 (inclusive) pos-  ́
suem a propriedade seguinte: a soma dos dois d ́ıgitos de mais baixa ordem com os dois
d ́ıgitos de mais alta ordem elevada ao quadrado e igual ao pr  ́ oprio numero. Por exemplo,  ́
para o inteiro 3025, temos que:
30 + 25 = 55
552 = 3025 ́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int soma1, soma2,i;

  for(i=1000; i<=9999; i++)
  {
     soma1 = i/100;
     soma2 = i%100;

     if((soma2+soma1)*(soma2 + soma1)==i)
     {
         printf("%d\n",i);
     }
  }
   return 0;
}
