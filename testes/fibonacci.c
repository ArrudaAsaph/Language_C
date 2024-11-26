#include <stdio.h>

int fibonacci(int termo){
    int a, b, c, num_fib, cont;

    a = 0;
    b = 1;

    if (termo == 1){
        num_fib = a;
    } else if( termo == 2){
        num_fib = b;
    } else{
        for (int i = 3; i <= termo; i++ ){
            num_fib = a + b; // c << 0 + 1
            a = b;
            b = num_fib;
            
        }
    }
    return num_fib;
}

int main(){
    
    int teste;
    teste = fibonacci(100);
    printf("%d", teste);
    return 0;
    
}