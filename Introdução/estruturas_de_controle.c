#include <stdio.h>



int main() {
    // DECLARAÇÃO DE VARIAVÉIS
    int numero;

    // PRINT
    printf("Digite um número: ");

    // LEITURA
    scanf("%d", &numero);

    if (numero > 0) {
        printf("O número %d é positivo.\n", numero);
    } else if (numero < 0) {
        printf("O número %d é negativo.\n", numero);
    } else {
        printf("O número é zero.\n");
    }

    return 0;
}