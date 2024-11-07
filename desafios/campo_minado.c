#include <stdio.h>

int main() {
    // Inicialização correta do campo com bombas (-1)
    int campo[3][3] = {
        {0, -1, 0},  // Linha 0
        {-1, 0, -1}, // Linha 1
        {-1, 0, 0}   // Linha 2
    };

    // Inicializando a matriz de contagem de bombas
    int matriz[3][3] = {0}; // Começa com todas as células em 0

    // Percorrer a matriz campo
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (campo[i][j] == -1) {  // Se houver uma bomba na posição (i, j)
                // Incrementa as células ao redor da bomba
                for (int di = -1; di <= 1; di++) {
                    for (int dj = -1; dj <= 1; dj++) {
                        int ni = i + di;
                        int nj = j + dj;

                        // Verifica se a posição (ni, nj) está dentro dos limites da matriz
                        if (ni >= 0 && ni < 3 && nj >= 0 && nj < 3 && campo[ni][nj] != -1) {
                            matriz[ni][nj] += 1;
                        }
                    }
                }
            }
        }
    }

    // Exibe o resultado
    printf("Matriz de bombas adjacentes:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
