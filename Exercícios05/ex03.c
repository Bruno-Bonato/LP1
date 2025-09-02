#include <stdio.h>

int compra(int* conta, int saldo,int compras[], int i){
    *conta = saldo - compras[i];
    return *conta;
}

int main(void){
    int minha_conta1, minha_conta2;
    int* conta;
    int compras[] = {100, 50, 80, 30, 20};
    
    printf("Qual o saldo da primeira e da segunda conta? R$");
    scanf("%d %d", &minha_conta1, &minha_conta2);
    
    for (int i = 0; i < 5; i++){
        if (minha_conta1 > minha_conta2){
            conta = &minha_conta1;
            printf("Valor das Contas: conta 1 - %d e conta 2 - %d\n", compra(conta, minha_conta1, compras, i), minha_conta2);
        } else {
            conta = &minha_conta2;
            printf("Valor das contas: conta 1 - %d e conta 2 - %d\n", minha_conta1, compra(conta, minha_conta2, compras, i));
        }
    }
    return 0;
}