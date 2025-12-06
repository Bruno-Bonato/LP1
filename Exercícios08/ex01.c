#include <stdio.h>
#include <string.h>

int main(void) {
    FILE* arq = fopen("./ex.txt", "rb+");
    if (!arq) {
        arq = fopen("./ex.txt", "wb+");
	if (!arq) {
		return 1;
	}
    }

    char string[25];
    printf("Digite um string com até 25 caracteres: ");
    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++) {
        fputc(string[i], arq);
    }

    fclose(arq);
    return 0;
}
