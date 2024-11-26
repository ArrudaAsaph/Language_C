#include <stdio.h>

// 7 % 3 = 1 => 7 - 3 = 4 - 3 => 1 
int mod(int a, int b){
    if (b > a){
        printf("CONDICAO DE PARADA a = %d, b = %d\n",a,b);
        return a;
    } else{
        printf("a = %d , b = %d\n",a,b);
        return  mod(a-b,b);
    }

    // a = 7 - 3 => a - (7-3,3) => 4,3 
}
int main(){

    int c = mod(7,8);
    printf("%d\n",c);
    return 0;
}