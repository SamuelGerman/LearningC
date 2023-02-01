/*16. Fac ̧a um programa que leia um vetor de 5 posic ̧oes para n  ̃ umeros reais e, depois, um  ́
codigo inteiro. Se o c  ́ odigo for zero, finalize o programa; se for 1, mostre o vetor na ordem  ́
direta; se for 2, mostre o vetor na ordem inversa. Caso, o codigo for diferente de 1 e 2  ́
escreva uma mensagem informando que o codigo  ́ e inv  ́ alido.  ́*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num[5],opcao,i;

    printf("Informe 5 numeros: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }

    printf("Selecione uma das opcoes abaixo:\n (0) Finaliza o programa\n (1) Mostra o vetor na ordem direta\n (2) Mostra o vetor na ordem inversa\n Opcao: ");
    scanf("%d",&opcao);

    switch(opcao)
    {
    case 0:
        exit(0);
        break;

    case 1:
        for(i=0;i<5;i++)
        {
            printf("%d, ",num[i]);
        }
        break;

    case 2:
        for(i=4;i>=0;i--)
        {
            printf("%d, ",num[i]);
        }
        break;

    default :
        printf("Erro: Opcao invalida.");
        exit(0);

    }

   return 0;
}
