/*19. Escreva um algoritmo que leia um numero inteiro entre 100 e 999 e imprima na sáıda
cada um dos algarismos que compoem o numero */

#include <stdio.h>
int main(){
    int num,algarismo;
    do{
        printf("Escreva um numero entre 100 e 999: ");
        scanf("%d",&num);
    }while(num<101 || num >998);
    printf("Os algarismos que compoe o numero %d sao: ",num);
    while(num>0){
        algarismo = num%10;
        num = num/10;

        printf("%d, ",algarismo);
    }

    return 0;
}
