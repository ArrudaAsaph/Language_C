#include <stdio.h>

double media (double a,double b,double c,double d){
    double soma = a + b + c + d;
    return (soma/4);
}

int main(){
    double a,b,c,d;
    printf("Digite um número: ");
    scanf("%lf", &a);
    printf("Digite um número: ");
    scanf("%lf", &b);
    printf("Digite um número: ");
    scanf("%lf", &c);
    printf("Digite um número: ");
    scanf("%lf", &d);

    printf("A media entre %lf,%lf,%lf,%lf = %lf",a,b,c,d,media(a,b,c,d));
    return 0;
}