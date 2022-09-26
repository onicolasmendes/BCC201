#include <stdio.h>
#include <string.h>
#define TAM 52

int main(int argc, char const *argv[])
{
    
    int n;

    printf("Digite a quantidade de casos:");
    scanf("%d", &n);
    getchar();

    while(n <= 0)
    {
        printf("ERRO - Digite um valor válido para a quantidade de casos:");
        scanf("%d", &n);
        getchar();
    }

    for(int i = 0; i < n; i++)
    {
        char string1[TAM], string2[TAM];

        printf("Digite a primeira string:");
        fgets(string1, TAM, stdin);
        string1[strlen(string1) - 1] = '\0';

        printf("Digite a segunda string:");
        fgets(string2, TAM, stdin);
        string2[strlen(string2) - 1] = '\0';

        char string3[100];

        int total = (int)strlen(string1) + (int)strlen(string2);
        int contstr1 = 0;
        int contstr2 = 0;

        for(int j = 0; j < total; j++)
        {
            if(j % 2 == 0 && string1[contstr1] != '\0')
            {
                string3[j] = string1[contstr1];
                contstr1++;
            }
            else
            {
                string3[j] = string2[contstr2];
                contstr2++;
            }
        }

        string3[total] = '\0';

        printf("%s\n", string3);
    }

    return 0;
}
