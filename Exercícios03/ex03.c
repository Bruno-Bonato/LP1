#include <stdio.h>

int main(void){
    short int temps[50];
    float média = 0;

    for (int i = 0; i < 50; i++){
        printf("Adicione uma temperatura: ");
        scanf(" %hi", &temps[i]);
        if (temps[i] <= 100 && temps[i] >= -100){
            média += temps[i]/50;
        } else {
            printf("Temperatura inválida\n");
        }
    }
    printf("A média das temperaturas: %.2f\n", média);
    return 0;
}