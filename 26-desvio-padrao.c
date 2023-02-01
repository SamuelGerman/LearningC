//26 desvio padrao
#include <stdio.h>
#include <math.h>
int main()
{
    int soma=0, vet[10],i;
    float media,desvio=0,desvios[10],desviopadrao,varianca;

    printf("Informe 10 numeros: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&vet[i]);
    }

    for(i=0;i<10;i++)
    {
        soma+= vet[i];
    }
    media = soma/10;

    for(i=0;i<10;i++)
    {
        desvio = media - vet[i];
        if(desvio<0)
        {
            desvio *= -1;
        }
        desvios[i] = desvio;
    }
    soma =0;
    for (i = 0; i < 10; i++)
	{
		soma += pow(desvios[i], 2);
	}

	varianca = soma / 9;

	desviopadrao = sqrt(varianca);

	printf("Desvio padrao = %f",desviopadrao);





    return 0;
}
