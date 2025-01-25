#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 1000000

int Random_Numbers(int qtd) {
    return rand() % qtd;
}

void bubbleSort(int v[TAMANHO]) {
    for (int i = 0; i < TAMANHO - 1; ++i) {
        for (int j = 0; j < TAMANHO - i - 1; ++j) {
            if (v[j] > v[j + 1]) {
                int temporario = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temporario;
            }
        }
    }
}

int main() {
    int array[TAMANHO];
    clock_t inicio, fim;
    double tempo_gasto;


    
    srand(time(NULL));

    
    for (int i = 0; i < TAMANHO; i++) {
        array[i] = Random_Numbers(TAMANHO);
    }

    inicio = clock();
    bubbleSort(array);
    fim = clock();

    tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
   

    printf("Tempo %f\n",tempo_gasto);

    return 0;
}
