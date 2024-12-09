#include <stdio.h>
#include <stdlib.h>

struct Agenda{
    char nome[50];
    char telefone[15];
};

struct Agenda* criar_contato(char nome[], char telefone[]){
    struct Agenda* _agenda = (struct Agenda*) malloc(sizeof(struct Agenda));

    strcpy(_agenda->nome, nome);
    strcpy(_agenda->telefone, telefone);

    free(_agenda);
    return 0;

}

void criar_contato(int op){
    char nome[50];
    printf("Nome do novo contato: ");
    scanf("%s",nome);
}
int main(){


    return 0;
}