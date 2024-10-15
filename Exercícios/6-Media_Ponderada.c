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