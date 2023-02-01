/*28. Fac ̧a um programa que leia um valor N inteiro e positivo, calcule o mostre o valor E,
conforme a formula a seguir  ́

E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!*/
#include <stdio.h>
int main(){
    int val,i,j;
    float e,fatorial; // e = resultado
    do{
        printf("Informe um valor: ");
        scanf("%d",&val);
    }while(val<1);

    // definir fatorial:
    e = 1; // inicializo a soma como 1 devido ao 1 + ,,, da formula

    for(i=2; i<=val ; i++){
        fatorial=i;
        for(j=i-1;j>0;j--){
            fatorial= fatorial*j;

        }
        e = e + (double) 1/fatorial;
    }
    printf("Resultado E = %f ",e);

    return 0;
}
