#include <stdio.h>
#include <string.h>

int main(){

    //variaveis
    char nome[15], nome1[15];

    printf("Digite o primeiro nome:");
    fgets(nome, 15, stdin);

    printf("Digite o segundo nome:");
    fgets(nome1, 15, stdin);

    if(strcmp(nome, nome1) == 0)
        printf("Os nomes são iguais\n");
    else
        printf("Os nomes não são iguais\n");

    return 0;
}