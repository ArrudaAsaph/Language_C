#include <stdio.h>
#include <locale.h>

double media(double a, double b, double c, double d) {
    double soma = a + b + c + d;
    return (soma / 4);
}

int main() {
    double a, b, c, d;
    
    printf("Digite um número: ");
    scanf("%lf", &a);
    printf("Digite um número: ");
    scanf("%lf", &b);
    printf("Digite um número: ");
    scanf("%lf", &c);
    printf("Digite um número: ");
    scanf("%lf", &d);

    printf("A média entre %.2lf, %.2lf, %.2lf, %.2lf = %.2lf\n", a, b, c, d, media(a, b, c, d));
    
    return 0;
}
<<<<<<< HEAD:Exercícios/Media_Reais.c
=======

// Escreva um programa que calcule a média aritmética de quatro números reais informados pelo usuário.
>>>>>>> 83ce610f99a2dcd42d686d9fa4297794307ad589:Exercícios/4-Media_Reais.c
