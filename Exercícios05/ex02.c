#include <stdio.h>

void compra(int* conta, int valor){
    *conta = *conta - valor;
}

int main(void){
    int minha_conta1, minha_conta2, valor = 500;
    int* conta;

    printf("Qual o saldo da primeira e da segunda conta? ");
    scanf("%d %d", &minha_conta1, &minha_conta2);

    if (minha_conta1 > minha_conta2){
        conta = &minha_conta1;
        compra(conta, valor);
        printf("O saldo das contas é: %d e %d\n", minha_conta1,minha_conta2);
    } else {
        conta = &minha_conta2;
        compra(conta, valor);
        printf("O saldo das contas é: %d e %d\n", minha_conta1, minha_conta2);
    }

    return 0;
}
