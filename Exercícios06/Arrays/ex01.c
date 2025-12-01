#include <stdio.h>

void preenche(int L, int C, int arr[L][C]) {
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("Digite o valor para arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}


int main(void) {
    int L, C;
    printf("Digite o numero de linhas: ");
    scanf("%d", &L);
    printf("Digite o numero de colunas: ");
    scanf("%d", &C);

    int arr[L][C];
    preenche(L, C, arr);
    for (int i = 0; i < L; i ++) {
        for (int j = 0; j < C; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}