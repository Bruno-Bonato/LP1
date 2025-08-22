#include <stdio.h>
#include <stdbool.h>

int main(void){
    float soma = 0;
    float num;

    while (true) {
        printf("Adicione um número ou digite '0': ");
        scanf("%f", &num);
        if (num != 0){
            soma += num;
        } else {
            break;
        }
    }
    printf("A soma de todos os número lidos foi: %.2f", soma);
    return 0;
}