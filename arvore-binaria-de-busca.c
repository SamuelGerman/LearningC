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
    No *pai = NULL;
    
    while(percorre != NULL && percorre->valor!= *num){
        pai = percorre; // pai fica um nó "atras" do nó percorre, que vai ir para uma das subarvores agora    
        if(*num < percorre->valor){
            percorre = percorre->esquerda;
        }else{
            percorre = percorre->direita;
        }
    }
    *num = percorre->valor;
    if(percorre==NULL)
        return 0; //nao ta na arvore
        
    if (percorre->esquerda == NULL && percorre->direita == NULL) {
        // Caso 1: o nó a ser removido é uma folha
        if (pai == NULL) {
            // Nó a ser removido é a raiz da árvore
            *ponteiro_raiz = NULL;
        } else if (percorre == pai->esquerda) {
            pai->esquerda = NULL;
        } else {
            pai->direita = NULL;
        }
        free(percorre);
    } else if (percorre->esquerda == NULL || percorre->direita == NULL) {
        // Caso 2: o nó a ser removido possui apenas um filho
        No *filho;
        if (percorre->esquerda != NULL) {
            filho = percorre->esquerda;
        } else {
            filho = percorre->direita;
        }
        if (pai == NULL) {
            // Nó a ser removido é a raiz da árvore
            *ponteiro_raiz = filho;
        } else if (percorre == pai->esquerda) {
            pai->esquerda = filho;
        } else {
            pai->direita = filho;
        }
        free(percorre);
    } else {
        // Caso 3: o nó a ser removido possui dois filhos
        No *sucessor = percorre->direita;
        pai = percorre;
        while (sucessor->esquerda != NULL) {
            pai = sucessor;
            sucessor = sucessor->esquerda;
        }
        percorre->valor = sucessor->valor;
        if (pai->esquerda == sucessor) {
            pai->esquerda = sucessor->direita;
        } else {
            pai->direita = sucessor->direita;
        }
        free(sucessor);
    }
    
}

void imprimir_em_ordem(No *raiz) { // esr - raiz - dir
    if (raiz != NULL) {
        imprimir_em_ordem(raiz->esquerda);
        printf("%d ", raiz->valor);
        imprimir_em_ordem(raiz->direita);
    }
}

void imprimir_arvore_pre_ordem(No *raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->valor);
        imprimir_arvore_pre_ordem(raiz->esquerda);
        imprimir_arvore_pre_ordem(raiz->direita);
    }
}

void imprimir_arvore_pos_ordem(No *raiz) {
    if (raiz != NULL) {
        imprimir_arvore_pos_ordem(raiz->esquerda);
        imprimir_arvore_pos_ordem(raiz->direita);
        printf("%d ", raiz->valor);
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
    
    int a,b,c,d;
    a=16;b=24;c=5;d=19;
    
    //remover_valor(&arv,&a);
    //remover_valor(&arv,&b);
    //remover_valor(&arv,&c);
    //remover_valor(&arv,&d);
    
    printf("%d;\n",consultar_valor(arv,15));
    printf("%d;\n",consultar_valor(arv,11));
    printf("%d;\n",consultar_valor(arv,24));
    printf("%d;\n",consultar_valor(arv,5));
    printf("%d;\n",consultar_valor(arv,19));
    printf("%d;\n",consultar_valor(arv,16));
    printf("%d;\n",consultar_valor(arv,123));
    printf("%d;\n",consultar_valor(arv,56));
    
    imprimir_em_ordem(arv); // esq - raiz - dir
    printf("\n");
    imprimir_arvore_pos_ordem(arv); // esq - dir - raiz
    printf("\n");
    imprimir_arvore_pre_ordem(arv); // raiz - esq - dir
    printf("\n");
    return 0;
}
