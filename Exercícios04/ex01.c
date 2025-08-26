#include <stdio.h>

char* eh_primo(int n){
    int divisores = 0;

    for(int i = 2; i < n; i++){
        if (n % i == 0){
            divisores += 1;
        }
    }

    if (divisores > 0){
        return "Não é primo!";
    } else {
        return "Sim, é primo!";
    }
}

int main(void){
    int n;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("%s\n",eh_primo(n));

    return 0;
}