/*35. Fac ̧a um programa que leia dois numeros  ́ a e b (positivos menores que 10000) e:
• Crie um vetor onde cada posic ̧ao ̃ e um algarismo do n  ́ umero. A primeira posic ̧  ́ ao ̃ e ́
o algarismo menos significativo;
• Crie um vetor que seja a soma de a e b, mas fac ̧a-o usando apenas os vetores
constru ́ıdos anteriormente.*/
#include <stdio.h>
int main()
{
    int a,b,alga[4]={0,0,0,0},algb[4]={0,0,0,0},i=0,soma[4]={0,0,0,0},qtdalga=0,qtdalgb=0,qtdalgsoma;

    do
    {
        printf("Digite a: (maior que 0 e menor que 10000)");
        scanf("%d",&a);
        printf("Digite b: (maior que 0 e menor que 10000)");
        scanf("%d",&b);
    }while(a<0 || a>=10000 || b<0 || b>=10000 );

    for(i=0;i<4;i++)
    {
        if(a>0)
        {
            alga[i]=a%10;
            a=a/10;
            qtdalga++;
        }

    }


    for(i=0;i<4;i++)
    {
        if(b>0)
        {
            algb[i]=b%10;
            b=b/10;
            qtdalgb++;
        }

    }

    for(i=0;i<4;i++)
    {
        soma[i]=alga[i]+algb[i];
    }
    for(i=0;i<4;i++)
    {
        if(soma[i]>=10)
        {
            soma[i]=soma[i]-10;
            soma[i+1]+=1;
        }
    }
    for(i=3;i>=0;i--)
    {
        printf("%d",soma[i]);
    }





    return 0;
}
