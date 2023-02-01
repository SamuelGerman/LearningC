/*23. Faca um algoritmo que leia um numero positivo e imprima seus divisores.   ́*/
#include <stdio.h>
int main(){
    int num,divisor;
    do{
        printf("Informe um numero positivo maior que 0: ");
        scanf("%d",&num);
    }while(num<=0);
    printf("Os divisores de %d sao:\n",num);
    for(int i = 1; i<=num;i++){
        if(num%i==0){
            divisor = i;
            printf("%d\n",i);
        }
    }
}
