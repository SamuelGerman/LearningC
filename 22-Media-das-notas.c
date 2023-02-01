/*22. Escreva um programa completo que permita a qualquer aluno introduzir, pelo teclado,
uma sequencia arbitraria de notas (validas no intervalo de 10 a 20) e que mostre na tela,
como resultado, a correspondente media aritmetica. O numero de notas com que o aluno ́
pretenda efetuar o calculo nao sera fornecido ao programa, o qual terminara quando for  ́
introduzido um valor que nao seja valido como nota de aprovacao.*/

#include <stdio.h>
#include <stdlib.h>
int main(){
    float nota,media,denominador,numerador=0,i=10;
    printf("Informe uma nota: ");
    scanf("%f",&nota);
    while(nota>=10 && nota<=20){
        numerador+=nota;
        denominador++;
        media = numerador/denominador;
        printf("Informe outra nota: ");
        scanf("%f",&nota);
        }

    printf("A media das notas equivale a %f",media);
    return 0;
}
