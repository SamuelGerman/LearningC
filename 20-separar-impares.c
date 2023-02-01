/*20. Escreva um programa que leia numeros inteiros no intervalo [0,50] e os armazene em um  ́
vetor com 10 posic ̧oes. Preencha um segundo vetor apenas com os n  ̃ umeros  ́  ́ımpares
do primeiro vetor. Imprima os dois vetores, 2 elementos por linha.*/
#include <stdio.h>
int main()
{
    int val[10],impar[10],j=0,qtdimpar=0,i;
    printf("Informe 10 numeros de 0 a 50: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&val[i]);

        if(val[i]>=0 && val[i]<=50)
        {
            if(val[i]%2!=0)
            {
                qtdimpar++;
                impar[j]=val[i];
                j++;
            }

        }else{
            i--;
        }
    }
    int linha =0;
    for(j=0;j<qtdimpar;j++)
    {
        printf("%d, ",impar[j]);
        linha++;
        if(linha==2)
        {
            printf("\n");
            linha =0;
        }
    }

    return 0;
}
