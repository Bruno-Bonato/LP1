#include <stdio.h>

float media(int L, int C, int arr[L][C]) {
    float media = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            media += (arr[i][j]);
        }
    }
    return media/(L * C);
}

int main(void) {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int L = 3, C = 3;
    printf("A MEDIA E: %.2f\n", media(L, C, arr));
    return 0;
}