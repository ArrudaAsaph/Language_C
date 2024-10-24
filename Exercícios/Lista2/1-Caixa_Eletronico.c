// Crie um programa que simule um caixa eletrônico de um único usuário. 
// O usuário deve poder sacar, depositar e verificar o saldo. Utilize while para manter 
// o programa em execução até que o usuário escolha sair, e if-else para validar as operações.

#include <stdio.h>

int main(){
    double saldo,valores;

    int comando;

    printf("****************************************************\n");
    printf("OLÁ, BEM VINDO AO BANCO ARRUDA\n");
    printf("\n");
    printf("QUAL OPERAÇÃO GOSTARIA DE SER REALIZADA? \n");
    printf("\n");
    printf("1 - SAQUE \n");
    printf("2 - DEPÓSITO\n");
    printf("3 - EXTRATO BANCÁRIO\n");
    printf("4 - FINALIZAR O SERVIÇO\n");
    printf("\n");
    printf("****************************************************\n");

    printf("Qual Operação deseja realizada: ");
    scanf("%d",&comando);

    while (comando != 0){
        if (comando == 1){
            printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            printf("QUAL O VALOR DESEJADO PARA O SAQUE? R$");
            scanf("%lf",&valores);
            if ((saldo - valores) < 0){
                printf("****** OPERAÇÃO INVÁLIDA *****\n");
                prinff("SALDO INSUFICIENTE\n");
                prinff("TENTE REALIZAR UM DEPÓSITO\n");
                printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                printf("\n");
                printf("1 - SAQUE \n");
                printf("2 - DEPÓSITO\n");
                printf("3 - EXTRATO BANCÁRIO\n");
                printf("4 - FINALIZAR O SERVIÇO\n");
                printf("\n");
                printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                printf("Qual Operação deseja realizada: ");
                scanf("%d",&comando);
            } else{
                saldo -= valores;
                printf("****** OPERAÇÃO FINALIZADA COM SUCESSO *****\n");
                printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
                printf("\n");
                printf("1 - SAQUE \n");
                printf("2 - DEPÓSITO\n");
                printf("3 - EXTRATO BANCÁRIO\n");
                printf("4 - FINALIZAR O SERVIÇO\n");
                printf("\n");
                printf("Qual Operação deseja realizada: ");
                scanf("%d",&comando);
            }

            

        } else if (comando == 2) {
            printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            printf("QUAL O VALOR DESEJADO PARA O DEPOSITO? R$");
            scanf("%lf",&valores);
            saldo += valores;
            printf("****** OPERAÇÃO FINALIZADA COM SUCESSO *****\n");
            printf("\n");
            printf("1 - SAQUE \n");
            printf("2 - DEPÓSITO\n");
            printf("3 - EXTRATO BANCÁRIO\n");
            printf("4 - FINALIZAR O SERVIÇO\n");
            printf("\n");
            printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            printf("Qual Operação deseja realizada: ");
            scanf("%d",&comando);

        } else if (comando == 3){
            printf("-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
            printf("QUAL O VALOR DESEJADO PARA O DEPOSITO? R$");
        }
    }
    



    return 0;
}