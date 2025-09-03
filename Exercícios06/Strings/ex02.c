#include <stdio.h>

int tamanho (char* str){
    int quant_caract = 0;
    
    for(int i = 0; str[i] != '\0'; i++){
        quant_caract += 1;
    }
    return quant_caract;
}

void concatena (char* d, char* o1, char* o2){
    int pos = 0;

    for(int i = 0; o1[i] != '\0'; i++){
        d[i] =  o1[i];
        pos += 1;
    }

    for(int i = 0; o2[i] != '\0'; i++){
        d[pos+i] =  o2[i];
    }
    d[pos + tamanho(o2)] = '\0';

}

int main(void){
    char o1[] = "Não interessa se você é o garoto mais lento da turma, ou o homem mais rápido do mundo, todos nós estamos correndo. Correndo de algo, correndo para algo ou para alguém.";
    char o2[] = "E não interessa o quão rápido você é, existem coisas de que nunca vai conseguir fugir. Algumas coisas sempre vão pegar você. - The Flash";

    int tamanho_dest = tamanho(o1) + tamanho(o2) + 1; //add o espaço do \n
    char dest[tamanho_dest];
    concatena(dest,o1,o2);
    printf("%s\n", dest);
    
    return 0;
}