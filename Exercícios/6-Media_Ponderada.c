#include <stdio.h>

float media(float a, float b){
    return (a * 6 + b * 4)/10;
}

int main(){
    float nota1,nota2,mediaPonderada;
    

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Sua média é: %.1f\n", media(nota1,nota2));
    return 0;
}

// Escreva um programa para calcular e exibir a média ponderada de 2 notas informadas pelo 
//usuário (nota 1 = peso 6 e nota 2 = peso 4). As notas são números reais.

// Exemplo de entrada	Exemplo de saída
// 5 - 8	6.3
// 3.5 - 7.7	5.2