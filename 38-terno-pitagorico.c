    /*38. Fac ̧a um programa que calcule o terno pitagorico  ́ a, b, c, para o qual a+b+c = 1000. Um
terno pitagorico  ́ e um conjunto de tr  ́ es n ˆ umeros naturais,  ́ a, b, c, para a qual,

a
2 + b
2 = c
2

Por exemplo,

3
2 + 42 = 9 + 16 = 25 = 52́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a,b,c;

  while(a*a + b*b != c*c)
  {
      a = 1 + (rand() %30 );
      b= 1 + (rand() %30 );
      c = 1 + (rand() %30 );
  }
  printf("%d , %d , %d",a,b,c);
   return 0;
}
