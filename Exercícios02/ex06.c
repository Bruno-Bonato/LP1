#include <stdio.h>

int main(void){
    int N;
    int soma = 0;

    printf("Qual será o valor de 'N': ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        soma += i*i;
    }
    printf("O somatório foi: %d\n", soma);
    return 0;
}