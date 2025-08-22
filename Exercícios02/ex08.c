#include <stdio.h>

int main(void){
    int N1, N2;

    printf("Digite os valores de N1 e N2: ");
    scanf("%d %d", &N1, &N2);

    if (N1 < N2){
        printf("Todos os números entre %d e %d:\n", N1, N2);
        for(int i = N1 + 1; i < N2; i++){
            printf("%d\n",i);
        }
    } else {
        printf("Todos os números entre %d e %d:\n", N2, N1);
        for(int i = N2 + 1; i < N1; i++){
            printf("%d\n",i);
        }
    }
    return 0;
}