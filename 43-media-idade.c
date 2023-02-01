    /*43. Fac ̧a um programa que leia um numero indeterminado de idades de indiv  ́  ́ıduos (pare
quando for informada a idade 0), e calcule a idade media desse grupo.  ́́́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int idade,soma=0,i=0;
  float media;
  printf("Informe uma idade: ");
  scanf("%d",&idade);
  if(idade>0)
  {
      for(i=0; idade >0 ; i++)
      {
          soma = soma + idade;
          printf("Informe uma idade: ");
          scanf("%d",&idade);

      }
    media = soma/i;
    printf("%f = media",media);
  }
   return 0;
}
