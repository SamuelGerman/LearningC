/*16. Faça um programa que leia um número inteiro positivo ímpar N e imprima todos os números
ímpares de 1 até N em ordem decrescente.*/
#include <stdio.h>
int main(){
    int i,N;
    do{
    printf("Indique o numero positivo para a contagem: ");
    scanf("%d",&N);
    }while(N<0 || N%2 ==0);

    printf("Os numeros naturais positivos impares de 1 ate %d em ordem crescente sao: \n",N);

    for(i=N;i>=0;){
        if(i%2!=0){
           printf("%d, ",i);
           i--;
        }else{i--;

        }
    }


    return 0;
    }
