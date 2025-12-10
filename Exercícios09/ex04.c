#include <stdio.h>


struct Caixa {
    int valor;
    struct Caixa* prox;
};

int contem (struct Caixa* lista, int valor){
    while(lista != NULL){
        if (lista->valor == valor){
            return 1;    
        } else {
            lista = lista->prox;
        }
    }
    return 0;
}

int main(void){
    struct Caixa c1,c2,c3,c4,c5,c6,c7;
    c1.valor = 1;
    c1.prox = &c2;

    c2.valor = 3;
    c2.prox = &c3;

    c3.valor = 9;
    c3.prox = &c4;

    c4.valor = 7;
    c4.prox = &c5;

    c5.valor = 5;
    c5.prox = &c6;

    c6.valor = 0;
    c6.prox = &c7;

    c7.valor = 11;
    c7.prox = NULL;

    struct Caixa* lista = &c1;

    printf("Qua o valor desejas procurar? ");
    int num;
    scanf("%d", &num);
    switch(contem(lista,num)){
        case 0: 
            printf("Valor não encontrado!\n");
            break;
        case 1: 
            printf("Valor %d está contido na lista!\n", num);
            break;
        default: 
            printf("Valor não encontrado!\n");
            break;
        
    }
    return 0;
}
