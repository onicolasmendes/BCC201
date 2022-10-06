#include <stdio.h>
#include <stdlib.h>

int ** criaMatriz(int n, int m);
void liberaMatriz(int **A, int n);
int verificaQuadradoMagico(int **A, int n, int m);

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite o valor de n:");
    scanf("%d", &n);

    while(n <= 0)
    {
        printf("Valor inválido\nDigite novamente o valor de n:");
        scanf("%d", &n);
    }

    int **matriz;

    matriz = criaMatriz(n, n);

    printf("Digite os valores da matriz n x n:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }

    int op;

    op = verificaQuadradoMagico(matriz, n, n);

    switch (op)
    {
    case 0:
        printf("Esta matriz NÃO é um quadrado mágico!\n");
        break;
    
    case 1:
        printf("Esta matriz é um quadrado mágico!\n");
        break;
    }

    liberaMatriz(matriz, n);

    return 0;
}

int ** criaMatriz(int n, int m)
{
    int **matriz = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++)
    {
        matriz[i] = malloc(m * sizeof(int));
    }

    return matriz;
}

int verificaQuadradoMagico(int **A, int n, int m)
{
    int soma = 0;
    int *vetor = malloc((2*n + 2) * sizeof(int));
    int cont = 0;
    //Soma das linhas
    for (int i = 0; i < n; i++)
    {
        soma = 0;
        for (int j = 0; j < m; j++)
        {
            soma += A[i][j];
        }
        vetor[cont] = soma;
        cont++;
    }

    //Soma das colunas
    for (int i = 0; i < n; i++)
    {
        soma = 0;
        for (int j = 0; j < m; j++)
        {
            soma += A[j][i];
        }
        vetor[cont] = soma;
        cont++;      
    }

    soma = 0;

    //Soma da diagonal principal 
    for (int i = 0; i < n; i++)
    {
        soma += A[i][i];
    }

    vetor[cont] = soma;
    cont++;

    soma=0;

    //Soma da diagonal secundária
    for (int i = n-1; i >= 0; i--)
    {
        soma += A[i][i];
    }

    vetor[cont] = soma;

    //Verificando se é um quadrado perfeito
    for (int i = 0; i <(2*n + 2); i++)
    {
        if (soma != vetor[i])
        {
            return 0;
        }

    }

    return 1;
    free(vetor);
}

void liberaMatriz(int **A, int n)
{
    for (int i = 0; i < n; i++)
    {
        free(A[i]);
    }

    free(A);
}
