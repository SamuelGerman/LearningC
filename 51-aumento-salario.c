/*51. Um funcionario recebe aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996  ́
recebeu aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao
dobro do ano anterior. Fac ̧a programa que determine o salario atual do funcion  ́ ario.  ́  ́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float aumento,salario=2000,ano=1997;

    while(ano <=2022)
    {
        aumento = 0.015;
        salario = salario + salario*aumento;
        ano++;
        aumento = aumento *2;

    }
    printf("Salario atual: %f",salario);

   return 0;
}
