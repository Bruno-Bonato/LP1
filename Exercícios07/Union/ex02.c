#include <stdio.h>
#include <string.h>

union cidadão{
    int CPF;
    int RG;
    char nome_completo[100];
};

int main(void){
    char resposta[13];
    union cidadão indent;

    printf("Como deseja se indetificar? (CPF) (RG) (NOME_COMPLETO) ");
    scanf("%s", resposta);

    if (strcmp(resposta,"CPF") == 0){
        printf("Digite seu CPF: ");
        printf("Seu CPF: %d", indent.CPF);
    } else if (strcmp(resposta,"RG") == 0){
        printf("Digite seu RG: ");
        scanf("%d", &indent.RG);
        printf("Seu RG: %d", indent.RG);
    } else if (strcmp(resposta,"NOME_COMPLETO") == 0){
        printf("Digite seu NOME_COMPLETO: ");
        scanf("%s", indent.nome_completo);
        printf("Seu Nome Completo: %s", indent.nome_completo);
    }

    return 0;
}