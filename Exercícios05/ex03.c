#include <stdio.h>

void compra(int* conta, int valor){
    *conta = *conta - valor;
}

int main(void){
    int minha_conta1, minha_conta2;
    int* conta;
    int compras[] = {100, 50, 80, 30, 20};
    
    printf("Qual o saldo da primeira e da segunda conta? R$");
    scanf("%d %d", &minha_conta1, &minha_conta2);
    
    for (int i = 0; i < 5; i++){
       	int valor = compras[i];
        if (minha_conta1 > minha_conta2){
            conta = &minha_conta1;
            compra(conta, valor);
            printf("Valor das Contas: conta 1 - %d e conta 2 - %d\n", minha_conta1, minha_conta2);
        } else {
            conta = &minha_conta2;
            compra(conta, valor);
            printf("Valor das contas: conta 1 - %d e conta 2 - %d\n", minha_conta2, minha_conta1);
        }
    }
    return 0;
}
