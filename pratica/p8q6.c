#include <stdio.h>
#include <string.h>
#define TAMMAX 20

int main(){

    //Declaração de variáveis
    char palavra[TAMMAX], palavraAoContrario[TAMMAX], fim[] = "FIM";
    int valida = 1;

    while(valida = 1)
    {
        printf("Digite uma palavra ou FIM para sair: ");
        fgets(palavra, TAMMAX, stdin);
        
        //REMOVER /N DA PALAVRA
        palavra[strlen(palavra)-1] = '\0';

        if(strcmp(palavra, fim) == 0)
        {
            valida = 0;
            break;
        }

        //Remover /n da string
        palavra[strlen(palavra)-1] = '\0';

        int controlador = strlen(palavra);

        for(int i = 0; i < strlen(palavra); i++)
        {
            palavraAoContrario[i] = palavra[controlador];
            controlador--;
        }

        printf("%s", palavraAoContrario);

        if(strcmp(palavra, palavraAoContrario) == 0)
            printf("%s é um palíndromo\n", palavra);
    }



    return 0;
}