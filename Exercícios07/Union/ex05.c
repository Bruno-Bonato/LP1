#include <stdio.h>
#include <stdbool.h>

struct Anfibios{
    int numero_de_patas;
    float espessura_da_pele;
    bool cauda;
};

struct Aves{
    float comprimento_do_bico;
    bool autonomia_de_voo;
    float frequencia_do_canto;
};

struct Mamifero{
    int quantidade_de_dentes; 
    float volume_do_cerebro; 
    float velocidade_terrestre;
};

struct Reptil{
    bool venenoso;
    bool autonomia_debaixo_dagua;
    float espessura_ovos;
};

struct Animal{
    union{
        struct Anfibios anfibio;
        struct Aves ave;
        struct Mamifero mamifero;
        struct Reptil reptil;
    };
};

int main(void){
    struct Animal animal1 = { .anfibio = {4, 0.5, false} };
    struct Animal animal2 = { .ave = {5.2, true, 1200.0} };
    struct Animal animal3 = { .reptil = {true, false, 1.2} };
    struct Animal animal4 = { .anfibio = {4, 0.3, true} };
    struct Animal animal5 = { .ave = {3.8, false, 800.0} };
    struct Animal animal6 = { .reptil = {true, false, 0.8} };

    return 0;
}
