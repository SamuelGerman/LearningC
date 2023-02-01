/*10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor,
calcule e imprima a média geral.*/

#include <stdio.h>

int main()
{
    float notas[15],media,soma=0;
    int i;

    printf("Informe as 15 notas: ");
    for(i=0;i<15;i++)
    {
        scanf("%f",&notas[i]);
        soma+= notas[i];
    }
    printf("%f soma \n",soma);
    printf("%d valor de i\n",i);
    media= soma/(i);
    printf("%f eh a media dos alunos.",media);

   return 0;
}
