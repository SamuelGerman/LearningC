/*11. Fa�a um programa que preencha um vetor com 10 n�meros reais, calcule e
mostre a quantidade de n�meros negativos e a soma dos n�meros positivos desse
vetor.*/

#include <stdio.h>

int main()
{
    float vet[10],soma=0;
    int i,qtdnegativo=0;

    printf("Informe 10 numeros reais: ");
    for(i=0; i<10;i++)
    {
        scanf("%f",&vet[i]);
        if(vet[i]<0)
        {
            qtdnegativo++;
        }else{
            soma+=vet[i];
        }
    }

    printf("Foram lidos %d numeros negativos e a soma dos numeros positivos equivale a %f",qtdnegativo,soma);
    return 0;
}
