#include <stdio.h>

int tamanho (char* str){
    int quant_caract = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        quant_caract += 1;
    }
    return quant_caract;
}

int main(void){
    char string[] = "Arroz, arroz, arroz, acha que eu só conheço arroz? Eu estava lá quando George Washington arrancou o primeiro amendoim, eu comi inhame, comi milho, comi algodão. Mas tudo o que a America quer, é seus pequenos grãos de arroz, eu luto, eu luto! Até não poder lutar mais!-Cris";
    
    printf("A string tem %d caractéres\n", tamanho(string));
    return 0;
}