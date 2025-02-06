#include <stdio.h>
#include <stdlib.h>

struct Node
    {
        int valor;
        struct  Node* proximo;
        struct  Node* anterior;
    };


struct Node* inicio = NULL;
struct Node* fim = NULL;


void inserir_elemento(int valor)
    {
        struct Node *novo_node = (struct Node*)malloc(sizeof(struct Node));
        novo_node->valor = valor;
        novo_node->proximo = inicio;
        novo_node->anterior = NULL;
        if (inicio != NULL)
            {
                inicio->anterior = novo_node;
            }
        inicio = novo_node;
    }