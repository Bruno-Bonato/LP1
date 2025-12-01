#include <stdio.h>
#include <string.h>

enum Tag{
    REAIS,
    DOLARES,
    EUROS
};

struct Preco{
   enum Tag tag;
    union {
        float reais;
        float dolares;
        float euros;
    };
};

void exibir(struct Preco* ptr){
    switch(ptr->tag){
        case REAIS: printf("VALOR: %.2f reais\n", ptr->reais); break;
        case DOLARES: printf("VALOR: %.2f dolares\n", ptr->dolares); break;
        case EUROS: printf("VALOR: %.2f euros\n", ptr->euros); break;
        default: printf("ERRO: Não foi possível exibir o valor\n");
    }
}


void altera(struct Preco* ptr, char moeda_pconversao[]){
    float temp;
    if (strcmp(moeda_pconversao, "REAIS") == 0){
        if(ptr->tag == DOLARES){
            temp = ptr->dolares * 5.32;
            ptr->reais = temp;
        } else if(ptr->tag == EUROS){
            temp = ptr->euros * 6.24;
            ptr->reais = temp;
        }
        ptr->tag = REAIS;
    } else if (strcmp(moeda_pconversao, "DOLARES") == 0){
        if(ptr->tag == REAIS){
            temp = ptr->reais * 0.19;
            ptr->dolares = temp;
        } else if(ptr->tag == EUROS){
            temp = ptr->euros * 1.17;
            ptr->dolares = temp;
        }
        ptr->tag = DOLARES;
    } else if (strcmp(moeda_pconversao, "EUROS") == 0){
        if(ptr->tag == REAIS){
            temp = ptr->reais * 0.16;
            ptr->euros = temp;
        } else if(ptr->tag == DOLARES){
            temp = ptr->dolares * 0.85;
            ptr->euros = temp;
        }
        ptr->tag = EUROS;
    }
}


int main(void){
    struct Preco valor_produto;
    
    printf("Em qual moeda está o preço? (REAIS 0) (DOLARES 1) (EUROS 2) ");
    scanf("%d", (int*)&valor_produto.tag);
    printf("Qual o valor do produto? ");

    switch(valor_produto.tag){
        case REAIS:
            scanf("%f", &valor_produto.reais);
            printf("Para qual moeda gostaria de alterar o valor? (DOLARES) (EUROS) ");
            break;
        case DOLARES:
            scanf("%f", &valor_produto.dolares);
            printf("Para qual moeda gostaria de alterar o valor? (REAIS) (euros) ");
            break;
        case EUROS:
            scanf("%f", &valor_produto.euros);
            printf("Para qual moeda gostaria de alterar o valor? (REAIS) (DOLARES) ");
            break;
    }
    char moeda_pconversão[10]; 
    scanf("%s", moeda_pconversão);

    altera(&valor_produto, moeda_pconversão);
    exibir(&valor_produto);

    return 0;
}