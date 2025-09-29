#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct Info_comuns{
    char nome_da_especie[50];
    char cor_predominante[20];
};

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
    struct Info_comuns info;
    union{
        struct Anfibios anfibio;
        struct Aves ave;
        struct Mamifero mamifero;
        struct Reptil reptil;
    };
};

void preecnher(struct Animal animais[]){
     char nome_espécie[50];
     char cor_padrão[20];
     printf("Qual a especie desses anmimais?E a cor predominante? ");
     scanf("%s %s", nome_espécie, cor_padrão);
     for (int i = 0; i < 6; i++){
        strcpy(animais[i].info.nome_da_especie,nome_espécie);
        strcpy(animais[i].info.cor_predominante,cor_padrão); 
    }
}

int main(void){
    struct Animal animal[6] = {{ .anfibio = {4, 0.5, false} },{ .ave = {5.2, true, 1200.0} },{ .reptil = {true, false, 1.2} },{ .anfibio = {4, 0.3, true} },{ .ave = {3.8, false, 800.0} },{ .reptil = {true, false, 0.8} }};
    preecnher(animal);
    for(int i = 0; i < 6; i++){
        printf("Animal %d: espécie %s, cor %s\n", i+1, animal[i].info.nome_da_especie, animal[i].info.cor_predominante);
    }

    return 0;
}