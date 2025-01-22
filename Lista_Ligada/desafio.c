// Implemente um programa simples que simule filas de atendimento em um consultorio médico. O programa deve permitir adicionar pacientes na fila, remover pacientes da fila e imprimir a fila de pacientes. As filas de pacientes são organizadas em ordem de chegada, ou seja, o primeiro paciente a chegar é o primeiro a ser atendido. As filas são organizadas por médico. Cada médico tem uma fila de pacientes. O programa deve permitir gerenciar ps pacientes em uma fila de um médico. Uma restrição do programa é que cada médico pode atender no máximo 15 pacientes por dia, sejam eles normais ou pacientes preferenciais. A cada 2 pacientes preferenciais, 1 paciente normal é atendido. O programa deve permitir adicionar pacientes normais e preferenciais na mesma fila do médico.

// Atualize a estrutura do nó para incluir um campo para o tipo de paciente. O campo tipo de paciente deve ser um inteiro que indica se o paciente é normal ou preferencial. O campo tipo de paciente deve ser 0 para pacientes normais e 1 para pacientes preferenciais. Atualize as operações de adicionar um elemento e remover um elemento para incluir o campo tipo de paciente. Atualize a operação de imprimir a lista para imprimir o tipo de paciente. Atualize a operação de calcular o tamanho da lista para calcular o número de pacientes normais e preferenciais. Atualize o programa principal para incluir a opção de adicionar pacientes normais e preferenciais na fila.

#include <stdio.h>
#include <stdlib.h>

struct Pacientes
{
    struct Pacientes *proximo;
    int valor; 
    int preferencial;
    

};

struct Pacientes *inicio_da_lista;

void inserir_Paciente(int valor, int preferencial)
{   
    struct Pacientes *novo_Paciente = (struct Pacientes *)malloc(sizeof(struct Pacientes));
    if (preferencial == 1)
        {
            novo_Paciente->valor = valor;
            novo_Paciente->proximo = NULL;
            if (inicio_da_lista == NULL)
                {
                    inicio_da_lista = novo_Paciente;
                }
            else
                {
                    struct Pacientes *paciente_atual = inicio_da_lista;
                    while (paciente_atual->proximo != NULL)
                        {
                            paciente_atual = paciente_atual->proximo;
                        }
                    paciente_atual->proximo = novo_Paciente;
    
                }
        }
    else
        {
            novo_Paciente->valor = valor;
            novo_Paciente->proximo = inicio_da_lista;

            inicio_da_lista = novo_Paciente;
        }
}

// void inserir_Paciente_Preferencial(int valor){
//     struct Pacientes *novo_Paciente = (struct Pacientes *)malloc(sizeof(struct Pacientes));
//     novo_Paciente->valor = valor;
//     novo_Paciente->proximo = NULL;
//     if (inicio_da_lista == NULL)
//         {
//             inicio_da_lista = novo_Paciente;
//         }
//     else
//         {
//             struct Pacientes *paciente_atual = inicio_da_lista;
//             while (paciente_atual->proximo != NULL)
//                 {
//                     paciente_atual = paciente_atual->proximo;
//                 }
//             paciente_atual->proximo = novo_Paciente;
//         }
// }

void remover_Paciente_Inicio(){
    struct Pacientes *paciente_atual = inicio_da_lista;
    inicio_da_lista = inicio_da_lista->proximo;
    free(paciente_atual);

}

void remover_Paciente(int valor){
    struct Pacientes *paciente_atual = inicio_da_lista;
    struct Pacientes *paciente_anterior = NULL;
    while (paciente_atual != NULL)
        {
           
            if (paciente_atual->valor == valor)
                {

                    if (paciente_anterior == NULL)
                        {
                            remover_Paciente_Inicio();
                        }
                    else    
                        {
                            paciente_anterior->proximo = paciente_atual->proximo;
                            free(paciente_atual);
                        }
                        return;
                }

            paciente_anterior = paciente_atual;
            paciente_atual = paciente_atual->proximo;
        }
}

void remover_Paciente_Final(){
    struct Pacientes *paciente_atual = inicio_da_lista;
    struct Pacientes *paciente_anterior = NULL;
    while (paciente_atual->proximo != NULL)
        {
            paciente_anterior = paciente_atual;
            paciente_atual = paciente_atual->proximo;
        }
    if (paciente_anterior == NULL)
        {
            inicio_da_lista = NULL;
        }
    else
        {
            paciente_anterior->proximo = NULL;
        }
    free(paciente_atual);
}


void listar_fila(){
    struct Pacientes *paciente_atual = inicio_da_lista;
    while (paciente_atual != NULL)
        {
            printf("%d ---> ",paciente_atual->valor);
            paciente_atual = paciente_atual->proximo;
        }   
        printf("NULL\n");
}

int main(){

    inserir_Paciente(10,0);
    listar_fila();
    inserir_Paciente(20,1);
    listar_fila();
    inserir_Paciente(40,0);
    listar_fila();
    inserir_Paciente(30,1);
    listar_fila();
    inserir_Paciente(80,0);
    listar_fila();

    
    remover_Paciente(30);
    listar_fila();
    remover_Paciente_Final();
    listar_fila();
    remover_Paciente_Inicio();
    listar_fila();
    

    return 0;
}