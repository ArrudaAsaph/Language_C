#include <stdio.h>

int main(){
    int a = 10, b = 20,c = 30;
    int *ponteiro; // declaração dos ponteiros
    ponteiro = &b; // atribuição (apontar endereço de memória)
    printf("b = %d, ponteiro = %d\n",b,*ponteiro);
    *ponteiro = -5; // atribuição
    printf("b = %d, ponteiro = %d\n",b,*ponteiro);
    ponteiro = &c;
    printf("c = %d, ponteiro = %d\n",c,*ponteiro);
    *ponteiro = 50;
    printf("c = %d, ponteiro = %d\n",c,*ponteiro);
    ponteiro = &a;
    printf("a = %d, b = %d, c = %d, *p = %d\n",a,b,c,*ponteiro);


    
   
    return 0;
}