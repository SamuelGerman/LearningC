/*23. Ler dois conjuntos de numeros reais, armazenando-os em vetores e calcular o produto  ́
escalar entre eles. Os conjuntos tem 5 elementos cada. Imprimir os dois conjuntos e o ˆ
produto escalar, sendo que o produto escalar e dado por:  ́ x1 ∗ y1 + x2 ∗ y2 + ... + xn ∗ yn.*/
#include <stdio.h>
int main()
{
    float a[5],b[5],result=0;
    int i;

    printf("Conjunto 1: ");
    for(i=0;i<5;i++)
    {
        scanf("%f",& a[i]);
    }

    printf("Conjunto 2: ");
    for(i=0;i<5;i++)
    {
        scanf("%f",&b[i]);
    }

    for(i=0;i<5;i++)
    {
        result = result + (a[i] * b[i]);
    }

    printf("Produto escalar = %f ",result);

    return 0;
}
