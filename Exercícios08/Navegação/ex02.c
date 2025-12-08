#include <stdio.h>
#include <string.h>

int main(void){
    FILE* arq = fopen("./ex02.txt", "r+");
    if (!arq){
        printf("Arquivo não encontrado!\n");
        return 1;
    }

    int c;
    int tamanho = 0;

    while((c = fgetc(arq)) != EOF){
        tamanho += 1;
    }

    if (tamanho > 1){
        printf("O arquivo tem %d bytes de caracteres reais\n", tamanho -1); //desconsideramos o '\n' final
    } else {
        printf("O arquivo esta vazio\n");    
    }

    fclose(arq);
    return 0;
}
