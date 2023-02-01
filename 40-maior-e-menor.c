/*40. Elabore um programa que fac ̧a leitura de varios n  ́ umeros inteiros, at  ́ e que se digite um  ́
numero negativo. O programa tem que retornar o maior e o menor n  ́ umero lido.  ́́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int maior,menor,numero;
  printf("Informe um numero: ");
  scanf("%d",&numero);

   maior=numero;
   menor=numero;

  while(numero>0)
    {
      printf("Informe um numero: ");
      scanf("%d",&numero);

      if(numero > maior)
      {
          maior = numero;
      }
      else if(numero < menor && numero > 0 )
      {
          menor = numero;
      }
  }
  printf("Maior : %d \n Menor : %d",maior,menor);
   return 0;
}
