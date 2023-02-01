/*21. Fac ̧a um programa que receba dois numeros. Calcule e mostre:  ́
• a soma dos numeros pares desse intervalo de n  ́ umeros, incluindo os n  ́ umeros digi-  ́
tados;
• a multiplicac ̧ao dos n  ̃ umeros ́  ́ımpares desse intervalo, incluindo os digitados;*/

#include <stdio.h>
int main(){
    int i=0,num1,num2,soma=0,multiplica=1;

    printf("Informe o primeiro numero: ");
    scanf("%d",&num1);
    printf("Informe o segundo numero: ");
    scanf("%d",&num2);

    if(num1>num2){
        for(i=num2;i<=num1;i++){
            if(num2%2==0){
                soma+= num2;
            }else{
                multiplica*=num2;
            }
            num2++;
        }
        printf("A soma dos pares desse intervalo eh igual a %d.\n ",soma);
        printf("O produto dos numeros impares desse intervalo eh igual a %d. ",multiplica);


    }else{
        for(i=num1;i<=num2;i++){
            if(num1%2==0){
                soma += num1;
            }else{
                multiplica*=num1;
            }
            num1++;
        }
        printf("A soma dos pares desse intervalo eh igual a %d.\n ",soma);
        printf("O produto dos numeros impares desse intervalo eh igual a %d. ",multiplica);
    }


    return 0;
}
