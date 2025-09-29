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

int main(void){
    struct Personagem vetor[10] = {};
    for (int i = 0; i < 10; i++){
        printf("Qual IDENTIDADE do personagem %d: ", i+1);
        scanf("%d", &vetor[i].indent);
        printf("Qual a coordenada X e Y da posicao do personagem %d: ", i+1);
        scanf("%d %d", &vetor[i].posi.x, &vetor[i].posi.y);
        printf("Qual a PONTUACAO do personagem %d: ", i+1);
        scanf("%d", &vetor[i].pont);
        printf("\n");
    }

    for(int i = 0; i < 10; i++){
        printf(" PERSONAGEM %d: identidade %d // posicao %d %d // pontuacao final %d\n",i+1, vetor[i].indent, vetor[i].posi.x, vetor[i].posi.y,vetor[i].pont);
    }

    return 0;
}