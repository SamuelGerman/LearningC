/*46. Fac ̧a um programa que gera um numero aleat  ́ orio de 1 a 1000. O usu  ́ ario deve tentar  ́
acertar qual o numero foi gerado, a cada tentativa o programa dever  ́ a informar se o  ́
chute e menor ou maior que o n  ́ umero gerado. O programa acaba quando o usu  ́ ario  ́
acerta o numero gerado. O programa deve informar em quantas tentativas o n  ́ umero foi  ́
descoberto  ̃́́́́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num,i,chute;
    num = 1+ (rand()%1000);
    i=0;
    while(chute != num)
    {
        i++;
        printf("Chute um numero:");
        scanf("%d",&chute);

        if(chute > num)
        {
            printf("Seu chute foi maior que o numero desta vez\n");
        }
        else if(chute<num)
        {
            printf("Seu chute foi menor que o numero desta vez\n");
        }
        else
        {
        printf("Voce acertou o numero %d em %d tentativas. ",num,i);
        }
    }


   return 0;
}
