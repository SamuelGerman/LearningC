/*17. Leia um vetor de 10 posic ̧oes e atribua valor 0 para todos os elementos que possu  ̃  ́ırem
valores negativos.*/

#include <stdio.h>
int main()
{
    int num[10],i,qtdnegativo;

    printf("Informe 10 valores: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<0)
        {
            num[i]=0;
        }
    }

    for(i=0;i<10;i++)
    {
        printf("%d, ",num[i]);
    }


    return 0;
}
