/*25. Fac ̧a um programa que preencha um vetor de tamanho 100 com os 100 primeiros natu-
rais que nao s  ̃ ao m  ̃ ultiplos de 7 ou que terminam com 7.  ́*/

#include <stdio.h>

int main()
{
    int vet[100],i;
    for(i=0;i<100;)
    {
        if(i%7!=0 || (i-7)%10==0 && (i-7)>=0)
        {
            vet[i]=i;
            i++;
        }else{
            vet[i]=i+1;
            i++;
        }


    }

    for(i=0;i<100;i++)
    {
        printf("%d, ",vet[i]);
    }
    return 0;
    }
