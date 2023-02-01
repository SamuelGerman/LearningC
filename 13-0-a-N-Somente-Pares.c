/*13. Faça um programa que leia um número inteiro positivo par N e imprima todos os números
pares de 0 até N em ordem crescente.*/
#include <stdio.h>
int main(){
    int i,N;
    do{
    printf("Indique o numero positivo PAR para a contagem: ");
    scanf("%d",&N);
    }while(N<0 || N%2!=0);

    printf("Os numeros naturais positivos pares de 0 ate %d em ordem crescente sao: \n",N);

    for(i=0;i<=N;){
        if(i%2==0){
           printf("%d, ",i);
           i++;
        }else{i++;

        }
    }


    return 0;
    }
