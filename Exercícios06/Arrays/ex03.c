#include <stdio.h>

float determinante(int lc, int arr[lc][lc]){
    float det_pos = 1, det_neg = 1;
    for (int i = 0; i < lc; i++){
        for (int j = 0; j < lc; j++){
            if (j == i){
                det_pos *= arr[i][j];
            }
            if (j == lc - i - 1){
                det_neg *= arr[i][j];
            }
        }
    }

    return det_pos - det_neg;
}

int main(void){
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int lc = 3;
    printf("Determinante: %.2f\n", determinante(lc, matriz));
    return 0;
}