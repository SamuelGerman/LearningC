/*29. Escreva um programa para calcular o valor da serie, para 5 termos.  ́
S = 0 + 1/2! + 2/4! + 3/6! + ...*/
#include <stdio.h>
int main(){
    int i,j,denominador=0,fatorial=0;
    double s=0; // resultado
    for(i=1;i<=5;i++){
        denominador = denominador+2;
        fatorial = denominador;

        for(j= denominador-1 ;j>0; j--){
            fatorial = fatorial*j;
        }
        s = s+ (double) i/fatorial;
    }
    printf("S = %lf",s);

    return 0;
}
