#include <stdio.h>

enum Boolean{
    FALSO,
    VERDADEIRO
};

int main(void) {
    int resposta;
    printf("O céu é azul? (0 - FALSO / 1 - VERDADEIRO) :");
    scanf("%d", &resposta);
    enum Boolean true_or_false = resposta;
    switch(true_or_false) {
        case FALSO:
            printf("Você respondeu FALSO");
            break;
        case VERDADEIRO:
            printf("Você respondeu VERDADEIRO");
            break;
        default:
            printf("Resposta inválida");
    }
 
    return 0;
}
