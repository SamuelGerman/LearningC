
#include <stdio.h>

int main()
{
    int vet[6];
    int i;

    for(i=0; i<6;i++)
    {
        printf("Valor do indice %d: ",i);
        scanf("%d",&vet[i]);
    }

    for(i=0; i<6;i++)
    {
        printf("Valor lido no indice %d:%d \n",i,vet[i]);
    }
    return 0;
}
