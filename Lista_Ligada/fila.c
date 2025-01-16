#include <stdio.h>
#include <stdlib.h>

struct Node{
    int valor;
    struct Node* proximo;
};

struct Node* inicio = NULL;

void insere(int valor) {
    struct Node* novo = (struct Node*)malloc(sizeof(struct Node));
    novo->valor = valor;
    if (inicio == NULL){
        novo->proximo = NULL;
        inicio = novo;
    } else
    {
 
    novo->proximo = inicio;
    inicio = novo;
    }
}

int busca(int valor){
    struct Node* temporario = inicio;
    while (temporario != NULL)
    {
        if(temporario->valor == valor){
            return 1;
        }
        temporario = temporario->proximo;
    }
    return 0;
    
}

void remover(int valor){
    
        struct Node* temporario = inicio;
        while (temporario != NULL)
        { 
            if(temporario->proximo->valor == valor)
            {
                i
                free(temporario);
                break;
            } 
            temporario = temporario->proximo;
        }
    
    }


void listar(){
    struct Node* temporario = inicio;
    while (temporario != NULL)
    {
        printf("%d ", temporario->valor);
        temporario = temporario->proximo;
    }
    printf("\n");
}
int main(){
    insere(10);
    insere(20);
    insere(11);
    insere(30);

    listar();

   
    remover(10);
    listar();

    
    return 0;
}
