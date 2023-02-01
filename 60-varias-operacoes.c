/*60. Fac ̧a um programa que leia varios n  ́ umeros, calcule e mostre:  ́
(a) A soma dos numeros digitados  ́
(b) A quantidade de numeros digitados  ́
(c) A media dos n  ́ umeros digitados  ́
(d) O maior numero digitado  ́
(e) O menor numero digitado  ́
(f) A media dos n  ́ umeros pareś́̃́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,soma=0,qtd=1,maior,menor,par=0,somapar=0;
    float media,mediapar;

    printf("Numero: ");
    scanf("%d",&num);
    soma+=num;

    maior=num;
    menor=num;

    for(int j =0;num>0;)
    {
        printf("Informe um numero:");
        scanf("%d",&num);
        qtd++;
        soma+=num;

        if(num > maior){
            maior = num;
        }
        else if(num < menor)
        {
            menor = num;
        }

        if(num%2==0){
            par++;
            somapar+=num;
        }
    }
    printf("Soma: %d\n",soma);
    printf("Numeros lidos: %d\n",qtd);
    media = soma/qtd;
    printf("Media = %f\n",media);

    if(par>0)
    {
        mediapar = somapar/par;
        printf("Media dos pares lidos: %f\n",mediapar);
    }else
    {
        printf("Media par inexistente, numeros pares inexistentes.\n");
    }
    printf("Maior:%d\n Menor:%d\n",maior,menor);

  return 0;
}
