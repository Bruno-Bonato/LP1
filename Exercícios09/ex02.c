#include <stdio.h>


struct Caixa {
    int valor;
    struct Caixa* prox;
};

struct Caixa c1,c2,c3,c4,c5;
struct Caixa *inicio = NULL;

void exibe (struct Caixa* caixa){
    printf("LISTA:");
    struct Caixa* atual = inicio;
    while(atual != NULL){
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

int main(void){

    c1.valor = 1;
    c1.prox = &c2;
    c2.valor = 3;
    c2.prox = &c3;
    c3.valor = 9;
    c3.prox = &c4;
    c4.valor = 7;
    c4.prox = &c5;
    c5.valor = 5;
    c5.prox = NULL;
    inicio = &c1;
    
    exibe(inicio);

    return 0;
}
