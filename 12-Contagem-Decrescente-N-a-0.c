/*12. Fa�a um programa que leia um n�mero inteiro positivo N e imprima todos os n�meros
naturais de 0 at� N em ordem decrescente.*/
#include <stdio.h>
int main(){
    int i,N;
    do{
    printf("Indique o numero positivo para a contagem: ");
    scanf("%d",&N);

    }while(N<0);

    printf("Os numeros naturais positivos de %d ate 0 em ordem decrescente sao: \n",N);

    for(i=N;i>=0;i--){
        printf("%d, ",i);

    }
    return 0;
    }
