/*5. Fa�a um programa que pe�a ao usu�rio para digitar 10 valores e some-os.*/
#include <stdio.h>
int main(){
    int valor,soma=0,i;
    for(i=0;i<10;i++){
       printf("Informe um numero: ");
       scanf("%d",&valor);
       soma = soma + valor;
    }
    printf("O valor da soma dos 10 numeros informado eh %d",soma);
    return 0;
    }
