/*19. Fac ̧a um vetor de tamanho 50 preenchido com o seguinte valor: (i+ 5 ∗ i)%(i+ 1), sendo
i a posic ̧ao do elemento no vetor. Em seguida imprima o vetor na tela.  ̃*/
#include <stdio.h>
int main()
{
    int val[50],i;

    for(i=0;i<50;i++)
    {
        val[i]=(i+5*i)%(i+1);
        printf("%d, ",val[i]);
    }
    return 0;
}
