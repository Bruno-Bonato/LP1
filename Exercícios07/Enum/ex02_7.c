#include <stdio.h>
#include <string.h>

enum Regiao_Campeao { LESTE, OESTE };

struct POLI_UCL{
    enum Regiao_Campeao tag;
    char campeão[30];
    char vice[30];
    char perdedor_semi1[30];
    char perdedor_semi2[30];
    union{
        int times_dleste;
        int times_doeste;
    };
};

void preenche(struct POLI_UCL* ptr){
    printf("Quem foi o campeão da Champions no ano vigente? ");
    scanf("%s", (*ptr).campeão);

    printf("Quem foi o vice campeão? ");
    scanf("%s", (*ptr).vice);

    printf("Quem perdeu na semi final contra o %s? ", (*ptr).campeão);
    scanf("%s", ptr->perdedor_semi1);

    printf("Quem perdeu na semi final contra o %s? ", (*ptr).vice);
    scanf("%s", ptr->perdedor_semi2);

    printf("O campeão pertence a qual região? (0 - Leste / 1 - Oeste) ");
    int reg;
    scanf("%d", &reg);
    ptr->tag = reg;
    if(ptr->tag == LESTE){
        printf("Quantos times do Leste participaram? ");
        scanf("%d", &ptr->times_dleste);
    } else {
        printf("Quantos times do Oeste participaram? ");
        scanf("%d", &ptr->times_doeste);
    }



}

int main(void){
    struct POLI_UCL ano_vigente;
    preenche(&ano_vigente);
    printf("\nNa Champions League desse ano...\nCAMPEÃO: %s\nVICE CAMPEÃO: %s\nSEMIFINALISTAS: %s e %s\n", ano_vigente.campeão, ano_vigente.vice, ano_vigente.perdedor_semi1, ano_vigente.perdedor_semi2);
    if(ano_vigente.tag == LESTE){
        printf("Número de times do Leste: %d\n", ano_vigente.times_dleste);
    } else {
        printf("Número de times do Oeste: %d\n", ano_vigente.times_doeste);
    }

    return 0;
}   

