/*52. Escreva um programa que receba como entrada o valor do saque realizado pelo cliente
de um banco e retorne quantas notas de cada valor serao necess  ̃ arias para atender ao  ́
saque com a menor quantidade de notas poss ́ıvel. Serao utilizadas notas de 100, 50,  ̃
20, 10, 5, 2 e 1 real. ́  ́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int saque,soma=0,cem=0,cinquenta=0,vinte=0,dez=0,cinco=0,dois=0,um=0;
    printf("Informe o valor do saque: ");
    scanf("%d",&saque);
    while (saque > 0)
    {
        while(saque>=100)
    {
        cem++;
        saque-=100;
    }
        if (saque >= 50)
		{
			cinquenta++;
			saque -= 50;
		}
		else if (saque >= 20)
		{
			vinte++;
			saque -= 20;
		}
		else if (saque >= 10)
		{
			dez++;
			saque -= 10;
		}
		else if (saque >= 5)
		{
			cinco++;
			saque -= 5;
		}
		else if (saque >= 2)
		{
			dois++;
			saque -= 2;
		}
		else if (saque >= 1)
		{
			um++;
			saque -= 1;
		}
    }
    while(saque>=100)
    {
        cem++;
        saque-=100;
    }
    if (saque >= 50)
		{
			cinquenta++;
			saque -= 50;
		}
		else if (saque >= 20)
		{
			vinte++;
			saque -= 20;
		}
		else if (saque >= 10)
		{
			dez++;
			saque -= 10;
		}
		else if (saque >= 5)
		{
			cinco++;
			saque -= 5;
		}
		else if (saque >= 2)
		{
			dois++;
			saque -= 2;
		}
		else if (saque >= 1)
		{
			um++;
			saque -= 1;
		}
    printf("Notas:\n %d de 100\n %d de 50\n %d de 20\n %d de 10\n %d de 5\n %d de 2\n %d de 1\n",cem,cinquenta,vinte,dez,cinco,dois,um);
   return 0;
}
