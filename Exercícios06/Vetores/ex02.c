#include <stdio.h>

int main(void){
    int vet[5];
    int i;

    for(int j = 0; j < 5; j++){
        printf("Adicione o %dº elemento: ", j+1);
        scanf("%d", &vet[j]);
    }

    printf("Qual posição deseja retirar? ");
    scanf("%d", &i);
    i = i - 1;
    vet[i] = 0;
    
    printf("Vetor Alterado:");
    for(int j = 0; j < 5; j++){
        printf(" %d", vet[j]);
    }

    for(int j = i; j < 5; j++){
        vet[j] = vet[j + 1];
    }
    
    vet[4] = 0;
    printf("\n");
    printf("Vetor Novo:");
    for(int j = 0; j < 5; j++){
        printf(" %d", vet[j]);
    }
    
    printf("\n");
    return 0;
}