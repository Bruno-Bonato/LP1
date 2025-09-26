#include <stdio.h>
#include <math.h>

struct Ponto{
    float x;
    float y;
};

void preenche(struct Ponto* ptr){
    printf("Digite a coordenada de X: ");
    scanf("%f", &(*ptr).x);
    printf("Digite a coordenada de Y: ");
    scanf("%f", &(*ptr).y);;
}

void preenche_vetores(struct Ponto lista[]){
    for(int i = 0; i < 10; i++){
        printf("Digite a coordenada de X do pornto %d: ", i+1);
        scanf("%f", &lista[i].x);
        printf("Digite a coordenada de Y do ponto %d: ", i+1);
        scanf("%f", &lista[i].y);;
    }
}

struct Ponto cal_dist(struct Ponto lista[]){
    struct Ponto ponto_maisdist_temp;
    float maior_dist;

    for(int i = 0; i < 10; i++){
        if (i == 0){
            ponto_maisdist_temp = lista[0];
            maior_dist = sqrt((lista[0].x * lista[0].x) + (lista[0].y * lista[0].y));
        } else {
            float dist = sqrt((lista[i].x * lista[i].x) + (lista[i].y * lista[i].y));
            if (dist > maior_dist){
                maior_dist = dist;
                ponto_maisdist_temp = lista[i];
            }
        }
    }
    return ponto_maisdist_temp;
}


int main(void){
    struct Ponto vetor[10];
    preenche_vetores(vetor);
    struct Ponto ponto_maisdist = cal_dist(vetor);
    printf("Ponto mais distante: (%.2f, %.2f)\n", ponto_maisdist.x, ponto_maisdist.y);

    return 0;
}