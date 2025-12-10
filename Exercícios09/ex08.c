#include <stdio.h>


struct Caixa {
    int valor;
    struct Caixa* prox;
};

void exibe (struct Caixa* caixa){
    printf("LISTA:");
    struct Caixa* atual = caixa;
    while(atual != NULL){
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

int contem(struct Caixa* caixa, int valor){
    while (caixa != NULL){
        if (caixa->valor == valor){
            return 1;
        }
        caixa = caixa->prox;
    }
    return 0;
}

void inserir_fim(struct Caixa* caixa, struct Caixa* caixa2){
    struct Caixa* atual = caixa;

    while(atual->prox != NULL){
            atual = atual->prox;
    }
    atual->prox = caixa2;
    caixa2->prox = NULL;
}

struct Caixa* concatena_sem_rep(struct Caixa* l1, struct Caixa* l2){
    if (l1 == NULL){
        return l2;    
    } else if (l2 == NULL){
        return l1;
    }

    struct Caixa* atual2 = l2;

    while (atual2 != NULL){
        struct Caixa* proximo = atual2->prox;
        if (!contem(l1,atual2->valor)){
            inserir_fim(l1,atual2);        
        }
        atual2 = proximo;
    }

    return l1;
}

int main(void){
    struct Caixa c1,c2,c3,c4,c5,c6,c7;
    c1.valor = 1;
    c1.prox = &c2;

    c2.valor = 3;
    c2.prox = &c3;

    c3.valor = 5;
    c3.prox = &c4;

    c4.valor = 7;
    c4.prox = &c5;

    c5.valor = 9;
    c5.prox = &c6;

    c6.valor = 11;
    c6.prox = &c7;

    c7.valor = 15;
    c7.prox = NULL;

    struct Caixa* l1 = &c1; //CAIXA 1

    struct Caixa c8, c9, c10, c11, c12, c13, c14;

    c8.valor  = 2;
    c8.prox   = &c9;

    c9.valor  = 4;
    c9.prox   = &c10;

    c10.valor = 7;
    c10.prox  = &c11;

    c11.valor = 8;
    c11.prox  = &c12;

    c12.valor = 12;
    c12.prox  = &c13;

    c13.valor = 13;
    c13.prox  = &c14;

    c14.valor = 15;
    c14.prox  = NULL;

    struct Caixa* l2 = &c8; //CAIXA 2
    l1 = concatena_sem_rep(l1,l2);
    exibe(l1);
    
    return 0;
}
