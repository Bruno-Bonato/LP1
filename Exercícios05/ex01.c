#include <stdio.h>

int main(void){
    int a,b;
    int* p;

    printf("Digite os valores dos inteiros 'a' e 'b': ");
    scanf("%d %d", &a, &b);
    printf("Valores de 'a' e 'b' respectivamente: %d e %d\n", a, b);

    if (a > b){
        p = &a;
    } else {
        p = &b;
    }

    *p = *p - 50;

    printf("Valores atualizados: 'a' -> %d e 'b' -> %d\n", a,b);

    return 0;
}