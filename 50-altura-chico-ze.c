/*50. Chico tem 1.50 metro e cresce 2 cent ́ımetros por ano, enquanto Ze tem 1.10 metros e  ́
cresce 3 cent ́ımetros por ano. Escreva um programa que calcule e imprima quantos anos
serao necess  ̃ arios para que Z  ́ e seja maior que Chico.  ́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float chico=1.50, ze=1.10,anos=0;

    while(ze < chico)
    {
        anos++;
        chico+=0.2;
        ze+=0.3;
    }
    printf("Tempo necessario para ze superar chico em anos: %f",anos);

   return 0;
}
