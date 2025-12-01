#include <stdio.h>
#include <stdbool.h>

enum TipoDeAnimal { ANFIBIOS, AVES, MAMIFERO, REPTIL };

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
    enum TipoDeAnimal tipo;
    union{
        struct Anfibios anfibio;
        struct Aves ave;
        struct Mamifero mamifero;
        struct Reptil reptil;
    };
};

int main(void){
    struct Animal animal1 = {ANFIBIOS, .anfibio = {4, 0.5, false} };
    struct Animal animal2 = {AVES, .ave = {5.2, true, 1200.0} };
    struct Animal animal3 = {REPTIL, .reptil = {true, false, 1.2} };
    struct Animal animal4 = {ANFIBIOS, .anfibio = {4, 0.3, true} };
    struct Animal animal5 = {AVES, .ave = {3.8, false, 800.0} };
    struct Animal animal6 = {REPTIL, .reptil = {true, false, 0.8} };

    return 0;
}
