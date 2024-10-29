// #include <stdio.h>
// #include <string.h>

// int main() {
//     char nome[6] = "texto";
//     int tamanho = strlen(nome);
//     printf("O tamanho da string é %d\n", tamanho);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char nome[6] = "texto";
//     char destino[6];
//     strcpy(destino, nome);
//     printf("A string destino é %s\n", destino);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>
// // CONCATENAR
// int main() {
//     char nome[6] = "texto";
//     char sobrenome[6] = "abcde";
//     strcat(nome, sobrenome);
//     printf("A string nome é %s\n", nome);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char nome1[6] = "texto";
//     char nome2[6] = "texto";
//     if (strcmp(nome1, nome2) == 0) {
//         printf("As strings são iguais\n");
//     } else {
//         printf("As strings são diferentes\n");
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// int main() {
//     char nome[6] = "texto";
//     char *p = strchr(nome, 't');
//     if (p != NULL) {
//         printf("O caractere 't' foi encontrado na posição %ld\n", p - nome);
//     } else {
//         printf("O caractere 't' não foi encontrado\n");
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    char nome[6] = "texto";
    char *p = strstr(nome, "ex");
    if (p != NULL) {
        printf("A substring 'ex' foi encontrada na posição %ld\n", p - nome);
    } else {
        printf("A substring 'ex' não foi encontrada\n");
    }
    return 0;
}