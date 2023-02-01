/*24. Escreva um programa que leia um numero inteiro e calcule a soma de todos os divisores  ́
desse numero, com excecao dele proprio. Ex: a soma dos divisores do numero 66  ́ e ́
1 + 2 + 3 + 6 + 11 + 22 + 33 = 78́*/
#include <stdio.h>
int main(){
    int num,soma=0,i=0;
    do{
        printf("Informe um numero: ");
        scanf("%d",&num);
    }while(num<1);
    for(i=1;i<num;i++){ //por ser i<num, o proprio numero é desconsiderado como divisor para a soma.
        if(num%i==0){
            soma+=i;
        }
    }
    printf("A soma dos divisores de %d eh igual a: %d",num,soma);
}
