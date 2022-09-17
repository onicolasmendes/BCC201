#include <stdio.h>
#include <string.h>
#define TAM_MAX 102

int main(){

    //Declaração
    char frase[102];

    //Entrada
    printf("Digite o texto para censurar:");
    fgets(frase, TAM_MAX, stdin);

    //Remover /n
    frase[strlen(frase) - 1] = '\0';

    //Escrevendo o vetor
    int tam = strlen(frase);
    for(int i = 0; i < tam; i++)
    {
        if(frase[i] == 'a')
            frase[i] = '@';
        else if(frase[i] == 'e')
            frase[i] = '_';
        else if(frase[i] == 'i')
            frase[i] = '|';
        else if(frase[i] == 'o')
            frase[i] = '0';
        else if(frase[i] == 'u')
            frase[i] = '#';
        else if(frase[i] == 's')
            frase[i] = '$';
    }

    //Imprimindo o vetor
    printf("%s\n", frase);

    return 0;
}