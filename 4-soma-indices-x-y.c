
#include <stdio.h>

int main()
{
    int vet[8];
    int i,x,y;

    printf("Informe 8 valores: ");
    for(i=0; i<8;i++)
    {
        scanf("%d",&vet[i]);
    }

    do
    {
        printf("Informe uma posicao de 0 a 7: ");
        scanf("%d",&x);
        printf("Informe outra posicao de 0 a 7: ");
        scanf("%d",&y);
    }while(x < 0 || x >7 || y < 0 || y > 7);

    int soma = vet[x] + vet[y];
    printf("Soma de %d e %d = %d",vet[x], vet[y], soma);

    return 0;
}
