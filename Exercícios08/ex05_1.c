#include <stdio.h>
#include <string.h>

void escreva_string (FILE* f, char* str) {
    for (int i = 0; i < strlen(str); i++) {
        fputc(str[i], f);
    }
}


int main(void) {
    FILE* arq = fopen("./ex05_1.txt", "rb+");
    if (!arq) {
        arq = fopen("./ex05_1.txt", "wb+");
	if (!arq) {
		return 1;
	}
    }

    char string[25];
    printf("Digite um string com até 25 caracteres: ");
    scanf("%s", string);
    escreva_string(arq,string);

    fclose(arq);
    return 0;
}
