//questao 5 quantos pares

#include <stdio.h>

int main()
{
    int vet[10];
    int i,qtdpar=0;

    printf("Informe 10 numeros: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&vet[i]);
    }

    for(i=0; i<10 ; i++)
    {
        if(vet[i]%2==0)
        {
            printf("%d eh par\n",vet[i]);
            qtdpar++;
        }else{}
    }
    printf("Quantidade de numeros pares: %d\n",qtdpar);
    return 0;
}
