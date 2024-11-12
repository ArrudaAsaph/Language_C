#include <stdio.h>

int main(){
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    if (p == &i){
        printf("1. True\n");
    } else{
        printf("1. False\n");
    }

    if (p == *p){
        printf("2. True\n");
    } else{
        printf("2. False\n");
    }

    if (q == j){
        printf("3. True\n");
    } else{
        printf("3. False\n");
    }

    if (*q == &j){
        printf("4. True\n");
    } else{
        printf("4. False\n");
    }

    if (q == j){
        printf("5. True\n");
    } else{
        printf("5. False\n");
    }
    printf("6. %d",*p - *q);
    

    
    return 0;
}