#include <stdio.h>
#include <string.h>

int main(void){
    FILE* arq = fopen("./ex02.txt", "r+");
    if (!arq){
        printf("Arquivo não encontrado!\n");
        return 1;
    }
    
    fseek(arq, 0, SEEK_END);
    long tamanho = ftell(arq);
    long meio = tamanho / 2;
    long tamanho_restante = tamanho - meio;

    char frase_usuario[30];
    printf("Qual a frase que gostaria de adicionar ao meio do arquivo: ");
    scanf("%s", frase_usuario);
    long bytes_frase_usuario = strlen(frase_usuario);

    char resto[200];
    fseek(arq, meio, SEEK_SET);
    fread(resto, 1, tamanho_restante, arq);

    fseek(arq, meio, SEEK_SET);
    fwrite(frase_usuario, 1, bytes_frase_usuario, arq);
    fwrite(resto, 1, tamanho_restante, arq);

    fclose(arq);
    return 0;
}

