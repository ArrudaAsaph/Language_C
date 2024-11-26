#include <stdio.h>


int div(int a, int b){
    if (b > a){
        return 0;
    } else{
        return 1 + div(a-b,b);
    }
}
int main(){

    int c = div(16,18);
    printf("%d\n",c);
    return 0;
}