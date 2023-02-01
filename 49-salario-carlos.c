/*49. O funcionario chamado Carlos tem um colega chamado Jo  ́ ao que recebe um sal  ̃ ario que  ́
equivale a um terc ̧o do seu salario. Carlos gosta de fazer aplicac ̧  ́ oes na caderneta de  ̃
poupanc ̧a e vai aplicar seu salario integralmente nela, pois est  ́ a rendendo 2% ao m  ́ es. ˆ
Joao aplicar  ̃ a seu sal  ́ ario integralmente no fundo de renda fixa, que est  ́ a rendendo 5%  ́
ao mes. Construa um programa que dever ˆ a calcular e mostrar a quantidade de meses  ́
necessarios para que o valor pertencente a Jo  ́ ao iguale ou ultrapasse o valor pertencente  ̃
a Carlos. Teste com outros valores para as taxas. ̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float carlos, jao,meses=0;
    printf("Informe o salario de carlos: ");
    scanf("%f",&carlos);
    jao = carlos/3;
    while(jao < carlos)
    {
        meses++;
        carlos = carlos + carlos*0.02;
        jao = jao + jao*0.05;
    }
    printf("Tempo necessario para joao se igualar ou superar carlos em meses: %f",meses);

   return 0;
}
