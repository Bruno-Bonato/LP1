#include <stdio.h>

struct Personagem {
    int força;
    int energia;
    int experiência;
};

int main(void){
    struct Personagem p1;
    p1.força = 10;
    p1.energia = 50;
    p1.experiência = 30;

    struct Personagem p2 = {18,20,25};

    return 0;
}