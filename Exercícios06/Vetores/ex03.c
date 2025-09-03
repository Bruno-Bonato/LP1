#include <stdio.h>

void preencher(int l, int c, int arr[l][c]){
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("Adicone o elemento arr[%d][%d]: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}

float media (int l, int c, int arr[l][c]){
    float media = 0;
    int num_elementos = l*c;
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
          media += (float) arr[i][j]/num_elementos;
        }
    }
    return media;
}


int main(void){
    int l,c;

    printf("Qual o valor de 'l' e de 'c': ");
    scanf("%d %d", &l, &c);

    int arr[l][c];
    preencher(l,c,arr);

    printf("Array:");
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            if(i == l-1 && j == c-1){
                printf(" %d\n", arr[i][j]);
            } else {
                printf(" %d", arr[i][j]);
            }
        }
    }
    printf("Média dos elementos do array: %.2f\n", media(l,c, arr));
    return 0;
}