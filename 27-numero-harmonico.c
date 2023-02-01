/*27 numero harmonico ́*/
#include <stdio.h>
int main(){
   int num,i;
   float harmonico=0;

   printf("Informe um numero: ");
   scanf("%d",&num);

   for(i=num;i>=1; i--){
       harmonico = harmonico + (double) 1.0000/i; // indica que o numero um deve ser do tipo double ou float para ter as casas decimais

   }

   printf("Numero harmonico h(%d) eh %f",num,harmonico);
  return 0;
}
