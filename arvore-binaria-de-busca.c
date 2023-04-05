#include <stdio.h>
#include <stdlib.h>
/*
Structs:no, ,pilha.
funções:, inserir_no(),consultar_no(),imprimir em pre-oredem, pos-ordem, in-ordem,remover_no.
*/

//-----------------------------------------------------------TADS-------------------------------------------------------------------------
typedef struct no{
    struct no* esquerda;
    struct no* direita;
    int valor;
}No;

typedef struct pilha{
    No* topo;
    No* prox;
}Pilha;

//-------------------------------------------------------------------funcoes prototipos-------------------------------------------------
Pilha* cria_pilha(){
    Pilha *p = (Pilha*)malloc(sizeof(Pilha));
    if(p != NULL)
        p->topo = NULL;
    return p;
}

No* cria_no(int num){
    No* novo=(No*)malloc(sizeof(No));
    if(novo != NULL){
        novo->direita=NULL;
        novo->esquerda=NULL;
        novo->valor=num;
    }else{
        printf("Erro ao criar novo No.\n");
    }
    return novo;
}

//**ponteiro_raiz, é um ponteiro que aponta para um ponteiro que aponta para um nó, nesse caso, o nó será a raíz da arvore ou subarvore
//onde o elemento novo sera inserido.

int inserir_no(No **ponteiro_raiz, int num){
    No *percorre = *ponteiro_raiz;

    // se a arvore / sub arvore nao apontar para nada.
    if(percorre==NULL){
        *ponteiro_raiz = cria_no(num);
        return 1;
    }

    if(percorre->valor == num){
        return 0;
    }

    if(num < percorre->valor){ //procurar na esquerda.
        return inserir_no(&(percorre->esquerda),num); // passar o endereço de memoria de um ponteiro é equivalente a passar um ponteiro para ponteiro

    }else{
        //procurar na direita
            return inserir_no(&(percorre->direita),num);
        }
}

int consultar_valor(No *raiz,int num){
    if(raiz == NULL)
        return 0; //nao achou
    if(raiz->valor == num)
        return 1; //achou
    if(num < raiz->valor){ //procurar na esquerda.
        return consultar_valor(raiz->esquerda,num);
    }else{
        return consultar_valor(raiz->direita,num);
    }  
}

int remover_valor(No **ponteiro_raiz, int *num){
    No *percorre = *ponteiro_raiz;
    if(percorre==NULL)
        return 0; //nao ta na arvore
    if(percorre->valor == num)
        return 1; //achou
    if(num < percorre->valor){//procurar na esquerda
        
    }
    
}
//------------------------------------------------------------------- MAIN -------------------------------------------------------------
int main(){

    No *arv = NULL;

    inserir_no(&arv,15); // passar o endereço de memoria de um ponteiro é equivalente a passar um ponteiro para ponteiro
    inserir_no(&arv,11);
    inserir_no(&arv,24);
    inserir_no(&arv,5);
    inserir_no(&arv, 19);
    inserir_no(&arv, 16);

    printf("%d;\n",consultar_valor(arv,15));
    printf("%d;\n",consultar_valor(arv,11));
    printf("%d;\n",consultar_valor(arv,24));
    printf("%d;\n",consultar_valor(arv,5));
    printf("%d;\n",consultar_valor(arv,19));
    printf("%d;\n",consultar_valor(arv,16));
    printf("%d;\n",consultar_valor(arv,123));
    printf("%d;\n",consultar_valor(arv,56));
    return 0;
}
