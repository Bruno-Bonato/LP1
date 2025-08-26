#include <stdio.h>
#include <string.h>

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

void todos_os_primos(int max){
    printf("Todos os primos entre 1 e %d:\n", max);
    printf("2\n");
    for(int i = 3; i < max; i++){
        if(strcmp(eh_primo(i),"Sim, é primo!") == 0){
            printf("%d\n", i);
        }
    }
}

int main(void){
    int max;

    printf("Digite um número inteiro: ");
    scanf("%d", &max);
    todos_os_primos(max);
    
    return 0;
}