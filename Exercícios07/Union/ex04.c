#include <stdio.h>
#include <string.h>

struct Preco{
    char moeda_em_uso[10];
    union {
        float reais;
        float dolares;
        float euros;
    };
};

void exibir(struct Preco* ptr){
    if (strcmp((*ptr).moeda_em_uso, "reais") == 0){
        printf("VALOR: %.2f %s", (*ptr).reais, (*ptr).moeda_em_uso);
    } else if (strcmp((*ptr).moeda_em_uso, "dolares") == 0){
        printf("VALOR: %.2f %s", (*ptr).dolares, (*ptr).moeda_em_uso);
    } else if (strcmp((*ptr).moeda_em_uso, "euros") == 0){
        printf("VALOR: %2f %s", (*ptr).euros, (*ptr).moeda_em_uso);
    }
}

void altera(struct Preco* ptr, char moeda_pconversao[]){
    if (strcmp(ptr->moeda_em_uso, "reais") == 0){
        if (strcmp(moeda_pconversao, "dolares") == 0){
            float temp = ptr->reais * 0.19;
            ptr->dolares = temp;
            strcpy(ptr->moeda_em_uso, "dolares");
        } else if (strcmp(moeda_pconversao, "euros") == 0){
            float temp = ptr->reais * 0.16;
            ptr->euros = temp;
            strcpy(ptr->moeda_em_uso, "euros");
        }
    } else if (strcmp(ptr->moeda_em_uso, "dolares") == 0){
        if (strcmp(moeda_pconversao, "reais") == 0){
            float temp = ptr->dolares * 5.32;
            ptr->reais = temp;
            strcpy(ptr->moeda_em_uso, "reais");
        } else if (strcmp(moeda_pconversao, "euros") == 0){
            float temp = ptr->dolares * 0.85;
            ptr->euros = temp;
            strcpy(ptr->moeda_em_uso, "euros");
        }
    } else if (strcmp(ptr->moeda_em_uso, "euros") == 0){
        if (strcmp(moeda_pconversao, "reais") == 0){
            float temp = ptr->euros * 6.24;
            ptr->reais = temp;
            strcpy(ptr->moeda_em_uso, "reais");
        } else if (strcmp(moeda_pconversao, "dolares") == 0){
            float temp = ptr->euros * 1.17;
            ptr->dolares = temp;
            strcpy(ptr->moeda_em_uso, "dolares");
        }
    }
}


int main(void){
    struct Preco valor_produto;
    
    printf("Em qual moeda está o preço? (reais) (dolares) (euros) ");
    scanf("%s", valor_produto.moeda_em_uso);
    printf("Qual o valor do produto em %s? ", valor_produto.moeda_em_uso);

    if (strcmp(valor_produto.moeda_em_uso, "reais") == 0){
        scanf("%f", &valor_produto.reais);
        printf("Para qual moeda gostaria de alterar o valor? (dolares) (euros) ");
    } else if (strcmp(valor_produto.moeda_em_uso, "dolares") == 0){
        scanf("%f", &valor_produto.dolares);
        printf("Para qual moeda gostaria de alterar o valor? (reais) (euros) ");
    } else if (strcmp(valor_produto.moeda_em_uso, "euros") == 0){
        scanf("%f", &valor_produto.euros);
        printf("Para qual moeda gostaria de alterar o valor? (reais) (dolares) ");
    }
    char moeda_pconversão[10]; 
    scanf("%s", moeda_pconversão);

    altera(&valor_produto, moeda_pconversão);
    exibir(&valor_produto);

    return 0;
}