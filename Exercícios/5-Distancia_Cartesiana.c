#include <stdio.h>
#include <math.h>

double distancia(double x1,double y1,double x2,double y2){
    double dist_x = x2 - x1;
    dist_x = pow(dist_x,2);
    double dist_y = y2 - y1;
    dist_y = pow(dist_y,2);
    double expo = 0.5;
    double dist =  pow((dist_x+dist_y),expo);
    return dist;
}
int main (){
    double x1,x2,y1,y2,d;
    printf("Digite a coordernada do Ponto A: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Digite a coordernada do Ponto B: ");
    scanf("%lf %lf", &x2, &y2);
    
    d = distancia(x1,y1,x2,y2);
    printf("Distância entre os pontos A e B é de %.2lf\n", d);
    return 0;
}

// Escreva um programa que, tendo como dados de entrada dois pontos quaisquer do plano, 
// A(x1, y1) e B(x2, y2), imprima a distância entre eles.

// A fórmula para calcular a distância ( d ) entre dois pontos ( A(x_1, y_1) ) e 
// ( B(x_2, y_2) ) em um plano cartesiano é dada por:

// [ d = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2} ]

// Onde:

// ( (x_1, y_1) ) são as coordenadas do ponto A.
// ( (x_2, y_2) ) são as coordenadas do ponto B.
// ( d ) é a distância entre os dois pontos.
// Faça uma pesquisa das funções presentes na biblioteca math.h para lhe auxiliar no cálculo. 
// Caso o compilador não reconheça as funções em math.h, adicione -lm ao final do comando de 
// compilação. Exemplo:

// gcc -o questao questao.c -lm
// Exemplo de entrada	Exemplo de saída
// A(0, 0) - B(4, 3)	5.0
// A(1.5, 2.3) - B(4, 6)	4.47