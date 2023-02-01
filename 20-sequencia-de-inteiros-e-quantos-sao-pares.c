/*20. Ler uma sequencia de numeros inteiros e determinar se eles sao pares ou nao. Devera
ser informado o numero de dados lidos e numero de valores pares. O processo termina
quando for digitado o numero 1000. */

#include <stdio.h>
int main(){
    int i=0,num,par=0;
    while(num!=1000){
        printf("Informe um numero inteiro: ");
        scanf("%d",&num);
        i++;
        if(num%2==0){
            par++;
        }

    }
    printf("Foram lidos %d valores e %d deles eram pares.",i,par);
    return 0;
}
