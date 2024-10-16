#include <stdio.h>

int controle (int racao, int gato1, int gato2,int qtd_Dias){
    racao = racao * 1000;
    gato1 = gato1 * qtd_Dias;
    gato2 = gato2 * qtd_Dias;

    racao -= gato1 + gato2;
    return racao;
}

int main(){

    int racao, gato1,gato2,dias;

    dias = 5;

    printf("Quantidade de ração: Kg ");
    scanf("%d", &racao);

    printf("Quantidade de ração do primeiro gato: g ");
    scanf("%d", &gato1);

    printf("Quantidade de ração do segundo gato: g ");
    scanf("%d", &gato2);

    racao = controle(racao,gato1,gato2,dias);

    printf("\nApós %d dias terá um total de ração igual a %d gramas\n",dias,racao);

    return 0;
}

// Pedro comprou um saco de ração com peso em quilos. 
// Pedro possui dois gatos para os quais fornece a quantidade 
// de ração em gramas. Escreva um programa que leia o peso do saco 
// de ração e a quantidade de ração fornecida para cada gato e em 
// seguida calcule e mostre quanto restará de ração no saco após cinco dias.

// Entrada:

// 1
// 50
// 100
// Saída:

// Resto de ração apos cinco dias: 250 gramas