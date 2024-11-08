#include <stdio.h>
// int find_1(int a[5][5]){
//    int lista[]; 
//     for (int i = 0; i < 5;i++){
//        for (int j = 0; i < 5;i++){
//         if (a[i][j] == -1){

//         }
       
//     }
// }
int main(){
    int campo_minado[5][5]= {
        {0,0,0,-1,0},
        {-1,0,0,0,-1},
        {0,0,-1,0,-1},
        {-1,0,-1,0,0},
        {0,0,-1,-1,0}
    };
    for (int i = 0; i < 5;i++){
       for (int j = 0; j < 5;j++){
            if (campo_minado[i][j] == -1){
                printf("Bomba acha na posição I = %d, J = %d\n",i,j);
                
            }

        }
    }
    return 0;
}