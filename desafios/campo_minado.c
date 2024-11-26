#include <stdio.h>

void add(int i, int j, int matriz[5][5]) {
    // Verifica as posições ao redor e incrementa se não houver uma bomba
    // Posições: direita, esquerda, embaixo, diagonal inferior direita, diagonal inferior esquerda,
    // acima, diagonal superior direita, diagonal superior esquerda.

    if (j + 1 < 5 && matriz[i][j+1] != -1) { // Direita
        matriz[i][j+1] += 1;
    }
    if (j - 1 >= 0 && matriz[i][j-1] != -1) { // Esquerda
        matriz[i][j-1] += 1;
    }
    if (i + 1 < 5 && matriz[i+1][j] != -1) { // Abaixo
        matriz[i+1][j] += 1;
    }
    if (i + 1 < 5 && j + 1 < 5 && matriz[i+1][j+1] != -1) { // Diagonal inferior direita
        matriz[i+1][j+1] += 1;
    }
    if (i + 1 < 5 && j - 1 >= 0 && matriz[i+1][j-1] != -1) { // Diagonal inferior esquerda
        matriz[i+1][j-1] += 1;
    }
    if (i - 1 >= 0 && matriz[i-1][j] != -1) { // Acima
        matriz[i-1][j] += 1;
    }
    if (i - 1 >= 0 && j + 1 < 5 && matriz[i-1][j+1] != -1) { // Diagonal superior direita
        matriz[i-1][j+1] += 1;
    }
    if (i - 1 >= 0 && j - 1 >= 0 && matriz[i-1][j-1] != -1) { // Diagonal superior esquerda
        matriz[i-1][j-1] += 1;
    }
}

int main() {
    // Inicializa o campo minado com bombas (-1) e espaços vazios (0)
    int campo_minado[5][5] = {
        {0, 0, 0, -1, 0},
        {-1, 0, 0, 0, -1},
        {0, 0, -1, 0, -1},
        {-1, 0, -1, 0, 0},
        {0, 0, -1, -1, 0}
    };

    // Exibe a matriz inicial
    printf("Campo inicial:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf(" {%d} ", campo_minado[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Processa cada bomba e chama a função add para incrementar os valores ao redor
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (campo_minado[i][j] == -1) {
                add(i, j, campo_minado);
            }
        }
    }

    // Exibe a matriz final com contagem de bombas vizinhas
    printf("Campo final com contagem de bombas vizinhas:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (campo_minado[i][j] == -1) {
                printf(" {B} ");
            } else {
                printf(" {%d} ", campo_minado[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
