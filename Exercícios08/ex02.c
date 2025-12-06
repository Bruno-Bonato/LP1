#include <stdio.h>

int main(void) {
    FILE *arq = fopen("ex.txt", "rb");
    if (!arq) {
        return 1;
    }

    int c;
    printf("---------- Caractere por caractere ----------\n");
    while ((c = fgetc(arq)) != EOF) {
        printf("%c\n", c);
    }

    fclose(arq);
    return 0;
}
