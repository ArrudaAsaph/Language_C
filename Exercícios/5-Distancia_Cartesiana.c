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