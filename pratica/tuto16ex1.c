#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[64];
    int idade;
}Duende;

void ordena(Duende vetor[], int tamanho);
Duende ** criaMatriz(int n, int m);
void liberaMatriz(Duende **A, int n);

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite o valor de n:");
    scanf("%d", &n);

    while(n % 3 != 0 || n <= 0)
    {
        printf("Valor inválido para n\nDigite novamente o valor de n:");
        scanf("%d", &n);
    }

    Duende *duendes = malloc(n * sizeof(Duende));

    for(int i = 0; i < n; i++)
    {
        printf("Digite nome e idade do duende:");
        scanf("%s %d", duendes[i].nome, &duendes[i].idade);
    }

    ordena(duendes, n);

    Duende **times;

    //Numero de times
    int nTimes = n / 3;

    times=criaMatriz(nTimes, 3);

    int cont = 0;

    //Pilotos
    for (int i = 0; i < nTimes; i++)
    {
        times[i][0] = duendes[i];
        cont++;    
    }

    //Entregadores
    for (int i = 0; i < nTimes; i++)
    {
        times[i][1] = duendes[cont];
        cont++;
    }

    //Líderes
    for (int i = 0; i < nTimes; i++)
    {
        times[i][2] = duendes[cont];
        cont++;
    }

    int con = 1;
    //Imprimindo os times (Ao contrário, pois o vetor for ordenado em ordem crescente)

    for (int i = nTimes-1; i >= 0; i-=1)
    {
        printf("Time %d\n", con);
        con++;
        printf("%s %d\n", times[i][2].nome, times[i][2].idade);
        printf("%s %d\n", times[i][1].nome, times[i][1].idade);
        printf("%s %d\n", times[i][0].nome, times[i][0].idade);
        printf("\n");
        
    }
    
    liberaMatriz(times, nTimes);
    free(duendes);
    return 0;
}

void ordena(Duende vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (vetor[i].idade > vetor[j].idade)
            {
                int temp = vetor[i].idade;
                char tempNome[64];
                strcpy(tempNome, vetor[i].nome);
                vetor[i].idade= vetor[j].idade;
                strcpy(vetor[i].nome, vetor[j].nome);
                vetor[j].idade = temp;
                strcpy(vetor[j].nome, tempNome);
            }
        }
    }
}

Duende ** criaMatriz(int n, int m)
{
    Duende **matriz = malloc(n * sizeof(Duende*));

    for (int i = 0; i < n; i++)
    {
        matriz[i] = malloc(m * sizeof(Duende));
    }

    return matriz;
}

void liberaMatriz(Duende **A, int n)
{
    for(int i = 0; i < n; i++)
    {
        free(A[i]);
    }

    free(A);
}
