/*4. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000 em
1000, imprimindo seu valor na tela, até que seu valor seja 100000 (cem mil).m.*/
#include <stdio.h>
int main(){
    int num=0;
    do{
        num = num + 1000;
        printf("%d \n",num);
    }while(num < 100000);
    return 0;
}
