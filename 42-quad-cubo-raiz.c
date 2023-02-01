/*42. Fac ̧a um programa que leia um conjunto nao determinado de valores, um de cada vez, e  ̃
escreva para cada um dos valores lidos, o quadrado, o cubo e a raiz quadrada. Finalize
a entrada de dados com um valor negativo ou zero.́́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int i,quad,cubo,valor;
  float raiz;
  printf("Informe um valor: ");
  scanf("%d",&valor);

  quad = valor * valor;
  cubo = valor * valor * valor;
  raiz = sqrt(valor);
  printf("Quadrado:%d \n Cubo:%d \n Raiz Quadrada:%f \n",quad,cubo,raiz);

  for(i=valor;valor>0;)
  {
      printf("Informe um valor: ");
      scanf("%d",&valor);

      quad = valor * valor;
      cubo = valor * valor * valor;
      raiz = sqrt(valor);
      printf("Quadrado:%d \n Cubo:%d \n Raiz Quadrada:%f \n",quad,cubo,raiz);
  }
   return 0;
}
