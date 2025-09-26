#include <stdio.h>

struct Pos{
    int x;
    int y;
};

struct Personagem{
    int indent;
    struct Pos posi;
    int pont;
};

void ler_pos(struct Personagem* ptr){
    printf("Qual a coordenada X e Y da posição do personagem: ");
    scanf("%d %d", &(*ptr).posi.x, &(*ptr).posi.y);
}

void preencher(struct Personagem* ptr){
    printf("Qual IDENTIDADE do personagem: ");
    scanf("%d", &(*ptr).indent);
    ler_pos(ptr);
    printf("Qual a PONTUAÇÃO do personagem: ");
    scanf("%d", &(*ptr).pont);
    printf("\n");
}

void inicializar_mapa(int mapa[10][10]){
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            mapa[i][j] = 0;
        }
    }
}

void preencher_mapa(int mapa[10][10], struct Personagem vetor[]){
    for (int i = 0; i < 10; i++){
        int x = vetor[i].posi.x;
        int y = vetor[i].posi.y;
      if (x >= 0 && x < 10 && y >= 0 && y < 10){
            mapa[y][x] = vetor[i].pont;
        }
    }
}

void imprimir_mapa(int mapa[10][10]){
    printf("\n   ");
    for (int j = 0; j < 10; j++){
        printf("%d ", j); 
    }
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%d  ", i);
        for (int j = 0; j < 10; j++){
            printf("%d ", mapa[i][j]);
        }
        printf("\n");
    }
}

void jogo(int mapa[10][10], struct Personagem vetor[]){
    inicializar_mapa(mapa);
    preencher_mapa(mapa, vetor);
    imprimir_mapa(mapa);
}

int main(void){
    int mapa[10][10];
    struct Personagem vetor[10] = {0};
    for (int i = 0; i < 10; i++){
        printf("%dº PERSONAGEM:\n\n", i+1);
        preencher(&vetor[i]);
    }
    jogo(mapa,vetor);

    return 0;
}