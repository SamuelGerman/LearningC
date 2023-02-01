/*31. Fac ̧a um programa que calcule e escreva o valor de S*/
#include <stdio.h>
int main(){
    float i,numerador=1;
    float result=0;
    for(i=1; i<=3;i++){
        result += numerador/i;
        numerador= numerador+2;
    }


    printf("resultado = %f ",result);


return 0;


}
