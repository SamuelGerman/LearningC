/*32. Fac ̧a um programa que simula o lanc ̧amento de dois dados, d1 e d2, n vezes, e tem como
sa ́ıda o numero de cada dado e a relac ̧  ́ ao entre eles (  ̃ >,<,=) de cada lanc ̧amento.*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int i,lancamentos,d1,d2; // dado 1 e dado 2

    printf("Informe quantas vezes os dados serao lancados: ");
    scanf("%d",&lancamentos);

    for(i=1;i<=lancamentos;i++){
        d1 = 1 + (rand() % 6);
        d2 = 1 + (rand() % 6);

        if(d1 == d2){
            printf("Dados tiveram o mesmo valor: %d\n",d1);
        }
        else if(d1<d2){
            printf("Dado 2 (%d) > dado 1 (%d) \n",d2,d1);
        }
        else if(d1>d2){
            printf("Dado 1 (%d) > dado 2 (%d)\n ",d1,d2);
        }

    }







    return 0;
}
