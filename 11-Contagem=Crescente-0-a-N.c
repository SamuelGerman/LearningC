/*11. Faça um programa que leia um número inteiro positivo N e imprima todos os números
naturais de 0 até N em ordem crescente.*/
#include <stdio.h>
int main(){
    int i,N;
    do{
    printf("Indique o numero positivo para o maximo da contagem: ");
    scanf("%d",&N);

    }while(N<0);

    printf("Os numeros naturais positivos de 0 ate %d sao: \n",N);

    for(i=0;i<=N;i++){
        printf("%d, ",i);

    }
    return 0;
    }
