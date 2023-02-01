/*33. Fac ̧a um programa que leia um vetor de 15 posic ̧oes e o compacte, ou seja, elimine as  ̃
posic ̧oes com valor zero. Para isso, todos os elementos  ̃ a frente do valor zero, devem ser `
movidos uma posic ̧ao para tr  ̃ as no vetor.  ́*/
#include <stdio.h>
int main()
{
    int val[15],i,qtd0=0;

    printf("Digite 15 valores: ");
    for(i=0;i<15;i++)
    {
        scanf("%d",&val[i]);
    }
    for(i=0;i<15;i++)
    {
        if(val[i]==0)
        {
            qtd0++;
            for(int j=i;j<15;j++)
            {
                val[j]=val[j+1];
            }
        }
    }
    printf("Vetor compactado: ");
    for(i=0;i<(15-qtd0);i++)
    {
        printf("%d, ",val[i]);
    }


    return 0;
}
