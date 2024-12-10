#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa
{
    char nome[50];
    int idade;
    int atendimento;
    char preferencial;
};

struct Fila{
    struct Pessoa *dados;
    int capacidade;
    int posicao;
    int tamanho;
};

void criar_Fila(struct Fila *fila, int cap_inicial){
    fila->dados = (struct Pessoa*) malloc(cap_inicial * sizeof(struct Pessoa));
    fila->capacidade = cap_inicial;
    fila->tamanho = 0;
}

void criar_Pessoas(struct Fila *fila, struct Pessoa pessoa){
    if (fila->tamanho >= fila->posicao){
        fila->capacidade = fila->capacidade * 2;
        fila->dados = (struct Pessoa*) realloc(fila->dados,fila->capacidade * sizeof(struct Pessoa));
    }
    printf("Capacidade da fila aumentada para %d \n", fila->capacidade);

    fila->dados[fila->tamanho] = pessoa;
    fila->tamanho++;
}

void listar_Fila(struct Fila *fila) {
    printf("\nPessoas na fila:\n");
    for (int i = 0; i < fila->tamanho; i++) {
        printf("Pessoa %d: Nome=%s, Idade=%d, Atendimento=%d, Preferencial=%c\n",
               i + 1, fila->dados[i].nome, fila->dados[i].idade,
               fila->dados[i].atendimento, fila->dados[i].preferencial);
    }
}

int main(){
    int op = 0;

    while (op != -1){
        scanf("%d",&op);
        struct Pessoa pessoa;
        if (op == 1){
            printf("Nome: ");
            scanf("")
        }
    }



    return 0;
}