#include <stdio.h>

int converter(int a){
    int a1 = a / 100;
    printf("%d",a1);
    int a2 = (a / 10)%10;
    printf("%d",a2);
    int a3 = a % 10;
    printf("%d",a3);
    return a3,a2,a1;
}

int main(){
    int a,a1,a2,a3;

    scanf("%d", &a);
    a3,a2,a1 = converter(a);
    printf("%d %d %d",a3,a2,a1);


    return 0;
}