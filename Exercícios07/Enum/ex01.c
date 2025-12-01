#include <stdio.h>

enum Dia{
    Dom,
    Seg,
    Ter,
    Qua,
    Qui,
    Sex,
    Sab
};

char* nome (enum Dia dia){
    switch(dia) {
        case Dom: return "Domingo";
        case Seg: return "Segunda";
        case Ter: return "Terca";
        case Qua: return "Quarta";
        case Qui: return "Quinta";
        case Sex: return "Sexta";
        case Sab: return "Sabado";
        default:  return "Dia invalido";
    }
}

int main(void){
    printf("%s", nome(Ter));
    return 0;
}