#include <stdio.h>

struct Over {
    int overall;
    char posição[20];
    int ritmo;
    int passe;
    int chute;
    int drible;
    int defesa;
    int físico;
    char país[20];
    char liga[20];
    char clube[20];
};

void exibir(struct Over A, struct Over B, struct Over C) {
    printf("----------------------------------------------------\n");
    printf("NEYMAR --- MESSI --- CRISTIANO RONALDO\n");
    printf("OVERALL: %d --- %d --- %d\n", A.overall, B.overall, C.overall);
    printf("POSICÃO: %s --- %s --- %s\n", A.posição, B.posição, C.posição);
    printf("RITMO: %d --- %d --- %d\n", A.ritmo, B.ritmo, C.ritmo);
    printf("PASSE: %d --- %d --- %d\n", A.passe, B.passe, C.passe);
    printf("CHUTE: %d --- %d --- %d\n", A.chute, B.chute, C.chute);
    printf("DRIBLE: %d --- %d --- %d\n", A.drible, B.drible, C.drible);
    printf("DEFESA: %d --- %d --- %d\n", A.defesa, B.defesa, C.defesa);
    printf("FÍSICO: %d --- %d --- %d\n", A.físico, B.físico, C.físico);
    printf("PAÍS: %s --- %s --- %s\n", A.país, B.país, C.país);
    printf("LIGA: %s --- %s --- %s\n", A.liga, B.liga, C.liga);
    printf("CLUBE: %s --- %s --- %s\n", A.clube, B.clube, C.clube);
    printf("----------------------------------------------------\n");
}

int main(void) {
    struct Over Neymar = {87,"PE",85,79,84,92,37,60,"Brasil","Brasileirão","Santos"};
    struct Over Messi = {87,"PD",78,84,85,90,35,64,"Argentina","MLS","Inter Miami"};
    struct Over Cristiano_Ronaldo = {85,"CA",76,88,76,80,33,78,"Portugal","Liga Saudita","Al-Nassr"};

    exibir(Neymar, Messi, Cristiano_Ronaldo);
    return 0;
}
