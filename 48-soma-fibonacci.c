/*48. Fac ̧a um programa que some os termos de valor par da sequencia de Fibonacci, cujos ˆ
valores nao ultrapassem quatro milh  ̃ oes.  ̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int soma=0,anterior=0,atual=1,proximo=1;
    while(proximo <4000000)
    {
        proximo = atual + anterior;
        anterior=atual;
        atual = proximo;

        if(proximo%2==0)
        {
            soma= soma + proximo;
        }
    }
    printf("soma = %d",soma);


    return 0;
}
