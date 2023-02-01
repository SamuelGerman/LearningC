/*39. Fac ̧a um programa que calcule a area de um tri  ́ angulo, cuja base e altura s ˆ ao fornecidas  ̃
pelo usuario. Esse programa n  ́ ao pode permitir a entrada de dados inv  ̃ alidos, ou seja,  ́
medidas menores ou iguais a 0.́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float base,altura,area;
  do
  {
  printf("Informe a base do triangulo: ");
  scanf("%f",&base);
  printf("Informe a altura do triangulo: ");
  scanf("%f",&altura);
  }while(base<1 || altura <1);

  area = (base*altura)/2;
  printf("%f eh a area deste triangulo.",area);


   return 0;
}
