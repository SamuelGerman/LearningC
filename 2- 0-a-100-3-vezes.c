/*2 Escreva um programa que escreva na tela, de 1 até 100, de 1 em 1, 3 vezes. A primeira vez
deve usar a estrutura de repetição for, a segunda while, e a terceira do while.*/
#include <stdio.h>
int main(){
    int num =1,numwhile=1,numdowhile=1, i;
    for(i=0; i<100; i++){
        printf("%d \n",num);
        num++;

    }

    while(numwhile<101){
        printf("%d, ",numwhile);
        numwhile++;
    }

    do{
        printf("\n%d\n",numdowhile);
        numdowhile++;
    }while(numdowhile<101);
    return 0;
}
