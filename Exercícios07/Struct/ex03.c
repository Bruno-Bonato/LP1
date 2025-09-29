#include <stdio.h>

struct Personagem{
    int força;
    int energia;
    int experiência;
};

void preencherB(struct Personagem* ptr){
    printf("FORÇA: ");
    scanf("%d",&ptr->força);

    printf("ENERGIA: ");
    scanf("%d", &ptr->energia);

    printf("EXPERIÊNCIA: ");
    scanf("%d", &ptr->experiência);
    printf("\n");
}

int main(void){
    struct Personagem p1;
    preencherB(&p1);

    struct Personagem p2;
    preencherB(&p2);

    printf("(%d,%d,%d) vs (%d,%d,%d)\n", p1.força, p1.energia, p1.experiência,p2.força, p2.energia, p2.experiência);
    
    return 0;
}