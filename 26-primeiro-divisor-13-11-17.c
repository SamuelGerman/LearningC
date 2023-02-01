/*26. Faca um algoritmo que encontre o primeiro multiplo de 11, 13 ou 17 apos um numero  ́
dado.́*/
#include <stdio.h>
int main(){
   int val,num,divisor;
   printf("Informe um numero: ");
   scanf("%d",&val);
   num=val;
   do{
    num++;

   }while (num%11 != 0 && num%13 != 0 && num%17 != 0 );
   printf("O numero %d eh o primeiro divisor de 11, 13 ou 17 apos %d.",num,val);

  return 0;
}
