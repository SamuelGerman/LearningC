/*9. Fa�a um programa que leia um n�mero inteiro N e depois imprima os N primeiros n�meros
naturais �mpares.*/
#include <stdio.h>
int main(){
    int val=0,N,i;
    printf("Informe um numero: ");
    scanf("%d",&N);
    for(i=0;i<2*N;i++){
        if(val%2!=0){
            printf("%d\n",val);
            val++;

        }else{val++;
            }
    }
    if(N<=0){
        printf("Nao existem numeros naturais impares menores ou iguais a zero.");
    }else{printf("Sao os %d primeiros numeros naturais impares",N);
        }

    return 0;
    }
