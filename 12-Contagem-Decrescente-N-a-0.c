/*12. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem decrescente.*/
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
