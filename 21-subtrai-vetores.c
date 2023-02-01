/*21. Fac ̧a um programa que receba do usuario dois vetores,  ́ A e B, com 10 numeros inteiros  ́
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C.*/
#include <stdio.h>
int main()
{
    int a[10],b[10],c[10],i;

    printf("Informe os valores do vetor a: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Informe os valores do vetor b: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }


    for(i=0;i<10;i++)
    {
        c[i]=a[i]-b[i];
        printf("%d, ",c[i]);
    }
    return 0;
}
