    /*8-Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.*/
#include <stdio.h>
int main(){
    int val,maior,menor,i;
    printf("Informe um valor: ");
    scanf("%d",&val);
    maior = val;
    menor = val;
    for(i=1;i<10;i++){
        printf("Informe um valor: ");
        scanf("%d",&val);
        if(val>maior){
            maior=val;
        }
        else if(val<menor){
            menor=val;
        }
    }
    printf("Maior numero: %d \n Menor numero: %d",maior,menor);
    return 0;
    }
