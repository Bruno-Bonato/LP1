#include <stdio.h>
#include <string.h>

int main(void){
    char nome_campeão[100], nome_pior[100], nome[100];
    int pontos_campeão = 0, pontos_pior = 0;
    int vit, emp, soma;
    
    for (int i = 1; i <= 20; i++){
        if (i == 1){
            printf("Qual o nome do 1º time: ");
            scanf("%s", nome_campeão);
            strcpy(nome_pior, nome_campeão);
            printf("Quantas vitórias e empates teve? ");
            scanf(" %d %d", &vit, &emp);
            pontos_campeão = pontos_pior = 3*vit + emp;
        } else {
            printf("Qual o nome do %dº time? ", i);
            scanf("%s", nome);
            printf("Quantas vitórias e empates teve? ");
            scanf(" %d %d", &vit, &emp);
            soma = 3*vit + emp;
            if (soma > pontos_campeão){
                strcpy(nome_campeão, nome);
                pontos_campeão = soma;
            } else if (soma < pontos_pior){
                strcpy(nome_pior, nome);
                pontos_pior = soma;
            }
        }
    }
    printf("O time com mais pontos e menos pontos foram: %s (%d pontos) e %s (%d pontos) respectivamente\n", nome_campeão, pontos_campeão, nome_pior, pontos_pior);
    return 0;
}