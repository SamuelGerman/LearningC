/*30. Fac ̧a programas para calcular as seguintes sequencias: ˆ
1 + 2 + 3 + 4 + 5 + ... + n
1 − 2 + 3 − 4 + 5 + ... + (2n − 1)
1 + 3 + 5 + 7 + ... + (2n − 1)*/
#include <stdio.h>
int main(){
    int val,i,j,k,seq=0,seq2=0,seq3=0;

    printf("Informe um valor: ");
    scanf("%d",&val);

    //seq
    for(i=0;i<=val;i++){
        seq = seq + i;
    }
    printf("Sequencia 1 = %d\n",seq);

    //seq2
    for(j=1;j<=val;) {
        seq2 = seq2 + j - (j+1);
        j+=2;

    }
    printf("Sequencia 2 = %d \n",seq2);

    //seq3
    for(k=1;k<=val;){
       if(k%2!=0){
        seq3= seq3 + k;
        k++;
       }else{
           k++;
        }
    }
    printf("Sequencia 3 = %d",seq3);
    return 0;
}
