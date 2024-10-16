#include <stdio.h>

float reajuste(float salario, float percentual){
    float total;

    percentual = percentual / 100;

    total =( percentual * salario )+ salario;

    return total;
}


int main (){
    float total, salario, percentual;

    printf("Digite o seu salário: R$ ");
    scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
    scanf("%f", &percentual);

    printf("O seu salári reajustado será: R$%.2f\n",reajuste(salario,percentual));
    
    

    return 0;
}