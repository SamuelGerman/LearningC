/*10. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>
int main(){
    int num=0,i,soma=0;
    for(i=0;i<101;i++){
        if(num%2==0){
            soma = soma + num;
            num++;
        }else{num++;
        }
    }
    printf("%d eh o valor da soma dos 50 primeiros numeros pares ",soma);
    return 0;
    }
