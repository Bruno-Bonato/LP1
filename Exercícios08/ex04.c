#include <stdio.h>
#include <string.h>

int main(void){
    FILE* arq = fopen("ex.txt", "rb+");
    if (!arq) {
        arq = fopen("ex.txt", "wb+");
        if (!arq) {
            return 1;
        }
    }

    char vetor[10][25];
    for (int i = 0; i < 10; i++) {
        printf("Digite a %dª string: ", i+1);
        scanf("%s", vetor[i]);
        for (int j = 0; j < strlen(vetor[i]); j++) {
            putc(vetor[i][j], arq);
            if (j == strlen(vetor[i]) - 1) {
                fputc('\n', arq);
            }
        }
    }

    fclose(arq);
    return 0;
}

