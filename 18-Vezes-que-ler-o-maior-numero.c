/*18. Escreva um algoritmo que leia certa quantidade de numeros e imprima o maior deles e
quantas vezes o maior numero foi lido. A quantidade de numeros a serem lidos deve ser
fornecida pelo usuario.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i=1,N,maior,contador=0;
    printf("Informe um numero ou digite 0 para parar o programa: ");
    scanf("%d",&N);
    maior = N;
    contador++;

    do{
        printf("Informe um numero ou digite 0 para parar o programa: ");
        scanf("%d",&N);
        if(N>maior && N!=0){
           maior = N;
           contador = 1;
        }
        else if(N == maior && N!=0){
            contador++;
            maior = N;
        }
        else if(N==0){
            i=0;
        }
    }while(i>0);
    printf("O maior numero (%d) foi lido %d vezes.",maior,contador);
    return 0;
    }
