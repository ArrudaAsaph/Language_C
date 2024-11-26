#include <stdio.h>

int main(){
    int a = 10, b = 20;
    int *pa, *pb; // declaração dos ponteiros
    pa = &a; // atribuição (apontar endereço de memória)
    pb = &b; // atribuição
    *pa = *pb * 2;
    printf("a = %d, b = %d\n",a,b);
    return 0;
}