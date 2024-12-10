#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(){
    int  op = 0;
    char nome[50];
    char telefone[15];

    while (op != -1){
        printf("Escolha a operação:\n");
        printf("1 - Inserir Cliente; 2 - Atualizar Cliente; 3 - Listar Clientes; 4 - Remover Cliente; -1 - Sair\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
        
            printf("Nome: ");
            scanf("%s", nome);
            printf("\nTelefone: ");
            scanf("%s", telefone);
            struct Agenda* agenda = criar_contato(nome,telefone);
            if (agenda != NULL) {
                printf("Contato criado: %s, %s\n", agenda->nome, agenda->telefone);
                free(agenda); 
            }
            break;
        case 2:
        
            break;
        
        case 3:
            /* code */
            break;
        case 4:

            break;
        
        default:
            break;
        }
    }

    return 0;
}