#include <stdio.h>

void primo(int termo){
    int divisores = 1 + primo_recu(termo,1);
    
    if (divisores == 2){
        printf("É primo");
    } else{
        printf("Não primo");
    }

}
int primo_recu(int termo, int contador){
    if (termo == 1){
        return 0;
    }
    if (contador == (termo / 2)){
        return 0;
    }else if ((termo % contador) == 0){
        return primo_recu(termo, contador + 1) + 1;
    } else{
        return primo_recu(termo, contador + 1);
    }
}

int main(){
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    primo(a);
    return 0;
}