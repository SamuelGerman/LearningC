//1 Fa�a um programa que determine o mostre os cinco primeiros m�ltiplos de 3, considerando n�meros maiores que 0.
#include <stdio.h>
int main(){
    int num=1,i; //i = contador
    for(i=0; i <5; ){ // inicializo o contador com o valor de 0, defino a condi��o de que meu programa se repetira enquanto i for menor que 5 (5 vezes)
        num%3;
        if(num%3==0){
            printf("%d \n",num); // verifico se o numero eh multiplo de 3, se ele for, eu imprimo o numero e incremento i.
            i++;                // esse processo se repetira ate que eu encontre os cinco primeiros multiplos de 3.
        }
        num++;
    }

    return 0;
}
