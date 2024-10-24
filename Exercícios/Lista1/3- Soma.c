#include <stdio.h>

int soma(int a, int b){
    int s = a + b;
    return s;
}

int main(){
    int a , b, s;

    printf("\nNúmero_1: ");
    scanf("%d", &a);
    printf("\nNúmero_2: ");
    scanf("%d", &b);

    s = soma(a,b);
    printf("A soma entre os números %d e %d é igual a %d", a, b, s);
    return 0;

}
//O programa a seguir lê dois números inteiros a e b (−106 ≤ a, b ≤ 106 ) e mostra a soma dos mesmos.