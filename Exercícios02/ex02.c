#include <stdio.h>

int main(void){
    float a, b;

    printf("Ensira dois valores quaisquer: ");
    scanf("%f %f", &a, &b);

    if (a > b){
        printf("O maior valor é: %.2f\n", a);
    } else {
        printf("O maior valor é: %.2f\n", b);        
    }
    return 0;
}