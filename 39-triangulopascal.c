/*39- triangulo pascal*/
#include <stdio.h>
int main()
{
    int num,i,j,tamanhovetor=0,aux1,aux2;

    printf("Informe um numero: ");
    scanf("%d",&num);

    for(i=0;i<num+1;i++)
    {
        tamanhovetor +=1; //define a quantidade de numeros total de todo o triangulo
    }

    int triangulo [tamanhovetor];
    for (i=0;i<tamanhovetor;i++)
    {
        triangulo[i]=0;
    }
    triangulo[0]=1;
    for(i=0;i<num;i++)
    {
        aux1 =0;
        for(j=0;j<=i;j++)
        {
            aux2=aux1 + triangulo[j];
            aux1=triangulo[j];
            triangulo[j]=aux2;
            printf("%d ",triangulo[j]);
        }
        printf("\n");
    }


    return 0;
}
