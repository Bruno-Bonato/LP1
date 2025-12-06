#include <stdio.h>
#include <string.h>

void escreva_string (FILE* f, char* str) {
    for (int i = 0; i < strlen(str); i++) {
        fputc(str[i], f);
    }
    fputc('\n',f);
}

int main(void){
    FILE* arq = fopen("ex05_4.txt", "rb+");
    if (!arq) {
        arq = fopen("ex05_4.txt", "wb+");
        if (!arq) {
            return 1;
        }
    }

    char vetor[10][25];
    for (int i = 0; i < 10; i++) {
        printf("Digite a %dª string: ", i+1);
        scanf("%s", vetor[i]);
        escreva_string(arq,vetor[i]);
    }

    fclose(arq);
    return 0;
}

