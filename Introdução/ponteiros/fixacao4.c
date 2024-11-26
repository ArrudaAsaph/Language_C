#include <stdio.h>

void swap (int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(){
    int a = 10, b = 20;
    int *pa, *pb;
    pa = &a; pb = &b; // declaração dos ponteiros
    swap(pa,pb);
    printf("pa = %d, pb = %d\n",*pa,*pb);

    return 0;
}