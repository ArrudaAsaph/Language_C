//2 Altere o programa da questão anterior para que o mesmo mostre na tela a mensagem O
// lá FULANO, bem-vindo(a) ao mundo da linguagem de programação C! onde FULANO deve ser substituído pelo seu nome. 
#include <stdio.h>

int main(){
    char nome[100];
    printf("Digite seu nome: ");
    scanf("%s",nome);
    printf("\nOlá %s, bem-vindo(a) ao mundo da linguagem de programação C!",nome);
    return 0;
}