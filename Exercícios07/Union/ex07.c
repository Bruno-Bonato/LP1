#include <stdio.h>
#include <string.h>

struct POLI_UCL{
    char campeão[30];
    char vice[30];
    char perdedor_semi1[30];
    char perdedor_semi2[30];
    char tag[20];
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

    printf("Dentre estes times a maior parte é do 'leste' ou do 'oeste' europeu? ");
    scanf("%s",(*ptr).tag);
    
    if (strcmp((*ptr).tag,"leste") == 0){
        printf("E quantos times são? ");
        scanf("%d", &(*ptr).times_dleste);
    } else if (strcmp((*ptr).tag,"oeste") == 0){
        printf("E quantos times são? ");
        scanf("%d", &(*ptr).times_dleste);
    }
}

int main(void){
    struct POLI_UCL ano_vigente;
    preenche(&ano_vigente);
    printf("\nNa Champions League desse ano...\nCAMPEÃO: %s\nVICE CAMPEÃO: %s\nSEMIFINALISTAS: %s e %s\n", ano_vigente.campeão, ano_vigente.vice, ano_vigente.perdedor_semi1, ano_vigente.perdedor_semi2);
    if (strcmp(ano_vigente.tag,"leste") == 0){
        printf("\nA maior parte dos clubes são do %s europeu, totalizando %d times.\n",ano_vigente.tag, ano_vigente.times_dleste);
    } else if (strcmp(ano_vigente.tag,"oeste") == 0){
        printf("\nA maior parte dos clubes são do %s europeu, totalizando %d times.\n",ano_vigente.tag, ano_vigente.times_doeste);
    }

    return 0;
}   