/*15. Fa�a um programa que leia um n�mero inteiro positivo �mpar N e imprima todos os n�meros
�mpares de 1 at� N em ordem crescente.*/
#include <stdio.h>
int main(){
    int i,N;
    do{
    printf("Indique o numero positivo para a contagem: ");
    scanf("%d",&N);
    }while(N<0 || N%2 ==0);

    printf("Os numeros naturais positivos impares de 1 ate %d em ordem crescente sao: \n",N);

    for(i=0;i<=N;){
        if(i%2!=0){
           printf("%d, ",i);
           i++;
        }else{i++;

        }
    }


    return 0;
    }
