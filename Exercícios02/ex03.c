#include <stdio.h>

int main(void){
    float valor_eua;

    printf("Qual o valor do celular em dÓlares? ");
    scanf("%f", &valor_eua);

    if (valor_eua > (1000*3.14)){
        printf("PESSIMO NEGÓCIO\n");
    } else {
        printf("BOM NEGÓCIO");
    }
    return 0;
}