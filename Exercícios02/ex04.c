#include <stdio.h>

int main(void){
    int velocidade;

    printf("Velocidade Atual (em mph): ");
    scanf("%d", &velocidade);

    if ((velocidade*1.6) < 80){
        printf("ACELERE");
    } else if ((velocidade*1.6) > 100){
        printf("DESACELERE");
    } else {
        printf("MANTENHA");
    }
    return 0;
}