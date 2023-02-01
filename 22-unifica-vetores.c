/*22. Fac ̧a um programa que leia dois vetores de 10 posic ̧oes e calcule outro vetor contendo,  ̃
nas posic ̧oes pares os valores do primeiro e nas posic ̧  ̃ oes impares os valores do se-  ̃
gundo.*/
#include <stdio.h>
int main()
{
    int a[10],b[10],c[20],i,j;

    printf("Valores do primeiro vetor: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Valores do segundo vetor: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&b[i]);
    }

    j=0;
    for(i=0;i<20;i=i+2)
    {
        c[i]=a[j];
        j++;
    }
    j=0;
    for(i=1;i<20;i=i+2)
    {
        c[i]=b[j];
        j++;
    }
    for(i=0;i<20;i++)
    {
        printf("%d, ",c[i]);
    }
    return 0;
}
