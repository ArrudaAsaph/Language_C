#include <stdio.h>

float comissao(float salario,float venda){
    return (salario + (venda * 0.04));
}


int main(){
    float total,salario,venda;

    printf("Salário fixo do funcionário: : R$ ");
    scanf("%f", &salario);

    printf("Valor das vendas: : R$  ");
    scanf("%f", &venda);

    total = comissao(salario,venda);
    printf("Valor da Comissão: : R$ %.2f",(total - salario));
    printf("\nValor do Salário final: : R$ %.2f\n",total );





    return 0;
}

// Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas.
// Escreva um programa que leia o salário fixo de um funcionário e o valor de suas vendas, 
// calcule e mostre a comissão e o salário final do funcionário.

// Entrada:

// - Salário fixo do funcionário: : R$ 1100,00
// - Valor das vendas: : R$ 2000,00
// Saída:

// - Valor da Comissão: : R$ 80,00
// - Valor do Salário final: : R$ 1180,00