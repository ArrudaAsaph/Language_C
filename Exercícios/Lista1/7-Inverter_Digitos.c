#include <stdio.h>

int main(){
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);

    int a1 = a / 100;

    int a2 = (a / 10)%10;

    int a3 = a % 10;
  

    printf("O número digitado invertido é igual a %d%d%d\n",a3,a2,a1);


    return 0;
}

//Escreva um programa capaz de inverter um número inteiro de 3 dígitos 
//fornecido pelo usuário. A inversão consiste em apresentar primeiro a 
//unidade, seguida da dezena e por último a centena. Exemplo:

// Exemplo de entrada	Exemplo de saída
// 108	801
// 123	321