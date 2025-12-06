#include <stdio.h>
#include <string.h>


void limpa_buffer(){
    int c;
    while((c = getchar()) != '\n' && c != EOF){}
}


struct Pessoa {
    int  idade;
    char nome[64];
    int  peso;
};

void preenche(struct Pessoa* ptr){
    printf("Digite o nome: ");
    fgets(ptr->nome,64,stdin);
    printf("Digite o idade: ");
    scanf("%d", &ptr->idade);
    printf("Digite o peso: ");
    scanf("%d", &ptr->peso);
    limpa_buffer();
    printf("\n");
}

void escrever_em_arq(struct Pessoa* p, FILE* f){
    int tam = strlen(p->nome);
    fwrite(&tam, sizeof(int), 1, f);  
    fwrite(p->nome,sizeof(char), tam, f);
    fwrite(&p->idade,sizeof(int), 1, f);
    fwrite(&p->peso,sizeof(int), 1, f);
}

void ler_em_arq(struct Pessoa* p, FILE* f, int index){
    rewind(f);
    int tam;

    for (int i = 0; i <= index; i++){
        fread(&tam, sizeof(int), 1, f);
        fread(p->nome, sizeof(char), tam, f);
        p->nome[tam] = '\0';
        fread(&p->idade, sizeof(int), 1, f);
        fread(&p->peso, sizeof(int), 1, f);
    }
}


int main(void) {
    FILE* arq = fopen("./ex07.bin", "rb+");
    if (!arq) {
        arq = fopen("./ex07.bin", "wb+");
        if (!arq) {
            return 1;
        }
    }

    struct Pessoa vetor[10];
    for (int i =0; i < 10; i++){
        preenche(&vetor[i]);
        escrever_em_arq(&vetor[i], arq);
    }
    int num;
    printf("Você gostaria de acessar os dados de qual pessoa (De 0 a 10)? ");
    scanf("%d", &num);

    struct Pessoa p;
    ler_em_arq(&p, arq, num);
    printf("------------------- DADOS DO USUÁRIO %d -----------------------\n",num);
    printf("NOME: %sIDADE: %d\nPESO: %d\n", p.nome, p.idade, p.peso);

    fclose(arq);
    return 0;
}
