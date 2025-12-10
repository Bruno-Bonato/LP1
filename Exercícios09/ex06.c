#include <stdio.h>


struct Caixa {
    int valor;
    struct Caixa* prox;
};
struct Caixa cnovo;

void exibe (struct Caixa* caixa){
    printf("LISTA:");
    struct Caixa* atual = caixa;
    while(atual != NULL){
        printf("%d ", atual->valor);
        atual = atual->prox;
    }
    printf("\n");
}

struct Caixa* insere (struct Caixa* lista, int valor){
      struct Caixa* atual = lista;
      extern struct Caixa cnovo;
      cnovo.valor = valor;

      if (lista == NULL || valor < lista->valor){
            cnovo.prox = lista;
            return &cnovo;
      } else {
            while(atual->prox != NULL && atual->prox->valor <= valor){
                    atual = atual->prox;
            }
      }

      cnovo.prox = atual->prox;
      atual->prox = &cnovo;
      return lista;
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

    struct Caixa* lista = &c1;
    printf("Qual valor gostaria de adiconar: ");
    int num;
    scanf("%d",&num);
    lista = insere(lista,num);
    exibe(lista);
    return 0;
}
