#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define TAMANHO 1000000

int Random_Numbers(int qtd) {
    return rand() % qtd;
}


void insertionSort(int v[])
{
    for (int i = 1; i < TAMANHO; ++i) {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key) {
            v[j + 1] = v[j];
            j = j - 1;
        }
        v[j + 1] = key;
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

    // for (int i = 0; i < TAMANHO; i++)
    //     {
    //         printf("%d -> %d\n",i,array[i]);
    //     }

    inicio = clock();
    insertionSort(array);
    fim = clock();

    tempo_gasto = (double)(fim - inicio) / CLOCKS_PER_SEC;
//    for (int i = 0; i < TAMANHO; i++)
//         {
//             printf("%d -> %d\n",i,array[i]);
//         }

    printf("Tempo %f\n",tempo_gasto);

    return 0;
}