/*45. Fac ̧a um algoritmo que converta uma velocidade expressa em km/h para m/s e vice
versa. Voce deve criar um menu com as duas opc ̧ ˆ oes de convers  ̃ ao e com uma opc ̧  ̃ ao ̃
para finalizar o programa. O usuario poder  ́ a fazer quantas convers  ́ oes desejar, sendo  ̃
que o programa so ser  ́ a finalizado quando a opc ̧  ́ ao de finalizar for escolhida.  ̃́́́́*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  float velocidade;
  int opcao;
  do
  {
      do
      {
        printf("Selecione a opcao que deseja\n (1) Para converter de km/h para m/s\n (2) Para converter de m/s para km/h\n (3) Para encerrar o programa.\n opcao: ");
        scanf("%d",&opcao);
      }while(opcao != 1 && opcao != 2 && opcao !=3);

        switch(opcao)
        {
             case 1:
            printf("Informe a velocidade: \n");
            scanf("%f",&velocidade);
            velocidade = velocidade * 3.6;
            printf("V = %f m/s\n\n",velocidade);
            break;

            case 2:
            printf("Informe a velocidade: \n");
            scanf("%f",&velocidade);
            velocidade = velocidade / 3.6;
            printf("V = %f km/h\n\n",velocidade);
            break;


        }

  }while(opcao!=3);

   return 0;
}

