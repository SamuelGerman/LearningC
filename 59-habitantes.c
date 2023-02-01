/*59. Escreva um programa que leia o numero de habitantes de uma determinada cidade, o  ́
valor do kwh, e para cada habitante entre com os seguintes dados: consumo do mesˆ
e o codigo do consumidor (1-Residencial, 2-Comercial, 3-Industrial). No final imprima o  ́
maior, o menor e a media do consumo dos habitantes; e por fim o total do consumo de  ́
cada categoria de consumidor.  ́́̃́̃*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int hab,codigo,residencial,comercial,industrial;
    float kwh,consumo_mes,media,maior,menor,totalresidencial, total_comercial, total_industrial, total_geral;
    maior =0;
    menor = 1;
    residencial=0;
    comercial=0;
    industrial=0;
    totalresidencial=0;
    total_industrial=0;
    total_comercial=0;
    total_geral=0;

    printf("Habitantes: ");
	scanf("%d", &hab);
	printf("Kwh: ");
	scanf("%f", &kwh);

    for(int i = 0; i <hab;i++)
    {
        printf("Consumo do mes: ");
		scanf("%f", &consumo_mes);
		printf("Digite uma das escolhas a seguir:\n");
		printf("1 - Residencial\n");
		printf("2 - Comercial\n");
		printf("3 - Industrial\n");
		printf("Codigo consumidor: ");
		scanf("%d", &codigo);

		total_geral += consumo_mes;

		if (consumo_mes > maior)
		{
			maior = consumo_mes;
		}

		if (consumo_mes < menor)
		{
			menor= consumo_mes;
		}

		if (codigo == 1)
		{
			residencial++;
			totalresidencial += consumo_mes;
		}
		else if (codigo == 2)
		{
			comercial++;
			total_comercial += consumo_mes;
		}
		else
		{
			industrial++;
			total_industrial += consumo_mes;
		}
    }

    media = total_geral / hab;

	printf("Maior consumo: %.2lf\n", maior);
	printf("Menor consumo: %.2lf\n", menor);
	printf("Media consumo: %.2lf\n", media);
	printf("Consumo total Residencial: %f\n", totalresidencial);
	printf("Consumo total Comercial: %f\n", total_comercial);
	printf("Consumo total Industrial: %f", total_industrial);
   return 0;
}
