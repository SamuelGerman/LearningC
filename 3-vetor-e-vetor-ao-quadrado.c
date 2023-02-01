
#include <stdio.h>

int main()
{
    float reais[10];
    float quad[10];
    int i;

    printf("Informe 10 numeros reais: ");

    for(i=0 ; i<10; i++)
    {
        scanf("%f",&reais[i]);
    }

    for(i=0 ; i<10; i++)
    {
        quad[i] = reais[i] * reais[i];
        printf("Quadrado de %f eh igual a %f\n",reais[i], quad[i]);
    }
    return 0;
}
