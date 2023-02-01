/* 33. Dados n e dois numeros inteiros positivos,  ́ i e j, diferentes de 0, imprimir em ordem
crescente os n primeiros naturais que sao m  ̃ ultiplos de  ́ i ou de j e ou de ambos. Exemplo:
Para n = 6, i = 2 e j = 3 a sa ́ıda devera ser: 0,2,3,4,6,8.  ́*/
#include <stdio.h>
int main(){
    int n,mult1,mult2,i,c=0;

        printf("Informe um valor: ");
        scanf("%d",&n);//valor
        printf("informe um multiplo: ");
        scanf("%d",&mult1);
        printf("informe outro multiplo: ");
        scanf("%d",&mult2);

        for(i = 0 ; c < n ; i++)
        {
            if(i%mult1==0 || i%mult2==0){

                printf("%d\n ",i);
                c++;
            }

        }





 return 0;
}

