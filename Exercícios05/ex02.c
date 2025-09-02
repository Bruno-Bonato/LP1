#include <stdio.h>

int compra(int* conta, int saldo){
    *conta = saldo - 500;
    return *conta;
}

int main(void){
    int minha_conta1, minha_conta2;
    int* conta;

    printf("Qual o saldo da primeira e da segunda conta? ");
    scanf("%d %d", &minha_conta1, &minha_conta2);

    if (minha_conta1 > minha_conta2){
        conta = &minha_conta1;
        printf("O saldo das contas é: %d e %d\n", compra(conta, *conta), minha_conta2);
    } else {
        conta = &minha_conta2;
        printf("O saldo das contas é: %d e %d\n", minha_conta1, compra(conta, *conta));
    }

    return 0;
}
