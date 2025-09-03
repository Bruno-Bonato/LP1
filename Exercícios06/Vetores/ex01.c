#include <stdio.h>

void preenche(int* xs, int n){
    for(int i = 0; i < n; i++){
        printf("Adicione o %dº elemento: ", i+1);
        scanf("%d", xs + i);
    }
}

float media(int* xs, int n){
    int media = 0;

    for(int i = 0; i < n; i++){
        media += *(xs + i)/n;
    }
    return media;
}

int main(void){
    int vec[100];
    int n;

    printf("Quantos elementos terá o vetor? ");
    scanf("%d", &n);
    preenche(vec, n);
    printf("Vetor: ");

    for(int i = 0; i < n; i++){
        printf("%d ", *(vec + i));
    }

    printf("\nMédia da lista: %.2f\n", media(vec,n));
    return 0;
}
