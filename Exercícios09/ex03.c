#include <stdio.h>


struct Caixa {
    int valor;
    struct Caixa* prox;
};

struct Caixa c1,c2,c3,c4,c5;
struct Caixa *inicio = NULL;


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
    
    struct Caixa* cabeca = &c1;
    struct Caixa* atual = cabeca;
    struct Caixa* anterior = NULL;

    while (atual->valor != 9){
        anterior = atual;
        atual = atual->prox;
    }
    if (anterior == NULL){
        cabeca = atual->prox;
    } else {
        anterior->prox = atual->prox;
    }

    return 0;
}
