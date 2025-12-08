#include <stdio.h>
#include <string.h>

int main(void){
    FILE* arq = fopen("./ex01.txt", "r+");
    if (!arq){
        printf("Arquivo não encontrado\n");
        return 1;
    }

    char buffer[256];
    fgets(buffer, sizeof(buffer), arq);
    int tamanho_linha = strlen(buffer);

    if (tamanho_linha == 0) {
        printf("Arquivo vazio!\n");
        fclose(arq);
        return 1;
    }

    while (1) {
        rewind(arq);

        printf("Digite o número de usuário (1 a 3, 0 para sair): ");
        int num;
        scanf("%d",&num);

        if (num == 0){
            printf("FIM DO PROGRAMA\n");
            break;
        }

        if (num < 1 || num > 3){
            printf("Registro nao encontrado\n");
            continue;
        }

        long pos = (num -1) * tamanho_linha;

        fseek(arq, pos + 9, SEEK_SET);

        char idade[4];
        fread(idade, 1, 3, arq);
        idade[3] = '\0';

        fseek(arq, 7, SEEK_CUR);

        char estado[3];
        fread(estado, 1, 2, arq);
        estado[2] = '\0';

        printf("OS DADOS DO USUÁRIO %d SÃO:\nIDADE: %s\nESTADO: %s\n", num, idade, estado);
    }

    fclose(arq);
    return 0;
}
