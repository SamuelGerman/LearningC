/*32 soma,diferença,intersecçao e uniao de dois vetores*/
#include<stdio.h>
int main()
{
    int vet1[5],vet2[5],diferenca[5],uniao[10],ineditos=0,i,j,repet,soma[5]={0,0,0,0,0},produto[5];;
    printf("Informe 5 elementos: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&vet1[i]);
    }

    printf("Informe mais 5 elementos: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&vet2[i]);
    }

    //soma:
    for(i=0;i<5;i++)
    {
        soma[i]=vet1[i]+vet2[i];
    }

    printf("\nVetor soma: ");
    for(i=0;i<5;i++)
    {
        printf("%d, ",soma[i]);
    }

    //produto:
    for(i=0;i<5;i++)
    {
        produto[i]=vet1[i]*vet2[i];
    }

    printf("\n\nVetor produto: ");
    for(i=0;i<5;i++)
    {
        printf("%d, ",produto[i]);
    }

    //diferenca:
    printf("\n\n Elementos que so existem no primeiro vetor: ");
    int k=0;
	for (i=0;i<5;i++)
	{
		repet=0;
		for (j=0;j<5;j++)
		{
			if (vet1[i] == vet2[j])
			{
				repet=1;
			}
		}

		if (repet==0)
		{
			diferenca[k] = vet1[i];
			ineditos++;
			k++;
		}
	}
    for (i=0;i<ineditos;i++)
    {
        printf("%d, ",diferenca[i]);
    }

    //interseçao
    printf("\n\n Interseccao: ");
    for(i=0;i<5;i++)
    {
        repet=0;
        for(j=0;j<5;j++)
        {
            if(vet1[i]==vet2[j])
            {
                repet=1;
            }

        }
        if(repet==1)
            {
                printf("%d, ",vet1[i]);
            }
    }
    //uniao:
    printf("\n\nUniao: ");
    for(i=0;i<5;i++)
    {
        uniao[i]=vet1[i];
    }
    j=0;
    for(i=5;i<10;i++)
    {
        uniao[i]=vet2[j];
        j++;
    }
    for(i=0;i<10;i++)
    {
        printf("%d, ",uniao[i]);
    }
    return 0;
}
