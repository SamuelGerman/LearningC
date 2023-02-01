/*35. Fac ̧a um programa que some os numeros impares contidos em um intervalo definido  ́
pelo usuario. O usu  ́ ario define o valor inicial do intervalo e o valor final deste intervalo  ́
e o programa deve somar todos os numeros  ́  ́ımpares contidos neste intervalo. Caso o
usuario digite um intervalo inv  ́ alido (comec ̧ando por um valor maior que o valor final) deve  ́
ser escrito uma mensagem de erro na tela, “Intervalo de valores invalido” e o programa  ́
termina. Exemplo de tela de sa ́ıda: Digite o valor inicial e valor final: 5
10
Soma dos  ́ımpares neste intervalo: 21*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int inicio,final,i,soma=0;
   printf("Informe o valor inicial do intervalo: ");
   scanf("%d",&inicio);
   printf("Informe o valor final do intervalo: ");
   scanf("%d",&final);

   if(inicio > final)
   {
       printf("Intervalo de valores invalido.");
       exit(0);
   }

   for(i=inicio; i<=final;i++)
   {
       if(i%2 != 0)
       {
           soma = soma + i;
       }

   }
   printf("Soma dos impares do intervalo: %d",soma);
   return 0;
}
