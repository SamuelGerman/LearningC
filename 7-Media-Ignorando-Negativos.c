/*7. Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e imprima sua
média.*/
#include <stdio.h>
int main(){
    int val,i,denominador=0,numerador;
    float media=0;
    for(i=0;i<10;i++){
        printf("Informe um valor: ");
        scanf("%d",&numerador);
        if(numerador<0){
            numerador = 0;
            i--;
            denominador--;
        }else
        media = media + numerador;
        denominador ++;
    }
    media = media/denominador;
    printf("media = %f",media);
    return 0;
    }
