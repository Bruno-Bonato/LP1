#include <stdio.h>

struct st_Ponto {
    float x;
    float y;
    float z;
};

union Ponto {
    struct st_Ponto coords;
    float v[3];
};

int main(void){
    union Ponto p;
    p.coords.x = 1.0;
    p.coords.y = 2.0;
    p.coords.z = 3.0;

    printf("Acessando via nomes: x = %.2f // y = %.2f // z = %.2f\n", p.coords.x, p.coords.y, p.coords.z);

    p.v[0] = 10.0;
    p.v[1] = 20.0;
    p.v[2] = 30.0;

    printf("Acessando via vetor: (%.2f, %.2f, %.2f)\n", p.v[0], p.v[1], p.v[2]);
    return 0;
}