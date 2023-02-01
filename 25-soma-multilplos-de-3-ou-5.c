/*25. Fac ̧a um programa que some todos os numeros naturais abaixo de 1000 que s  ́ ao m  ̃ ultiplos  ́
de 3 ou 5.́*/
#include <stdio.h>
int main(){
   int num=999,soma;
   for(num=999;num>0;num--){
       if(num%5==0 || num%3==0){

           soma += num;
       }

   }
   printf("Soma dos numeros naturais abaixo de 1000 multiplos de 3 ou 5 = %d ",soma);
}
