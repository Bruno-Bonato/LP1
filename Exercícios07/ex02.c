#include <stdio.h>

struct Personagem{
    int força;
    int energia;
    int experiência; 
};


struct Personagem preencherA(void){
    struct Personagem temp;
    printf("FORÇA: ");
    scanf("%d", &temp.força);

    printf("ENERGIA: ");
    scanf("%d", &temp.energia);

    printf("EXPERIÊNCIA: ");
    scanf("%d", &temp.experiência);
    printf("\n");
    return temp;
}

int main(void){
    struct Personagem p1 = preencherA();
    struct Personagem p2 = preencherA();

    printf("(%d,%d,%d) vs (%d,%d,%d)\n", p1.força, p1.energia, p1.experiência, p2.força, p2.energia, p2.experiência); 
    return 0;
}