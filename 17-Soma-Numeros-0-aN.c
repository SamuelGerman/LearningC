/*17. Faça um programa que leia um número inteiro positivo n e calcule a soma dos n primeiros
números naturais.*/
#include <stdio.h>
int main(){
    int i,soma=0,N;
    do{
    printf("Indique o numero positivo para a contagem: ");
    scanf("%d",&N);
    }while(N<0);

    printf("Os numeros naturais positivos somados de 0 ate %d valem: ",N);

    for(i=0;i<=N;i++){
        soma = i + soma;
    }
    printf("%d",soma);
    return 0;
    }
