#include <stdio.h>

struct POLI_UCL{
    char campeão[30];
    char vice[30];
    char perdedor_semi1[30];
    char perdedor_semi2[30];
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
}

int main(void){
    struct POLI_UCL ano_vigente;
    preenche(&ano_vigente);
    printf("\nNa Champions League desse ano...\nCAMPEÃO: %s\nVICE CAMPEÃO: %s\nSEMIFINALISTAS: %s e %s\n", ano_vigente.campeão, ano_vigente.vice, ano_vigente.perdedor_semi1, ano_vigente.perdedor_semi2);
    
    return 0;
}   