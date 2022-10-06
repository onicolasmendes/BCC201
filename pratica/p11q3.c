#include <stdio.h>
#include <stdlib.h>

int multiplicaMatrizes(int ***R, int **A, int n, int m, int **B, int p, int q);
int **criaMatriz(int m, int n);
void liberaMatriz(int **A, int m);

int main(int argc, char const *argv[])
{
    int **A;
    int n, m;
    printf("Digite os tamanhos da matriz A:");
    scanf("%d %d", &n, &m);
    A = criaMatriz(n, m);

    printf("Digite os dados da matriz A:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int **B;
    int p, q;
    printf("Digite os tamanhos da matriz B:");
    scanf("%d %d", &p, &q);
    B = criaMatriz(p, q);

    printf("Digite os dados da matriz B:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    int **R;

    int op;

    op = multiplicaMatrizes(&R, A, n, m, B, p, q);

    switch (op)
    {
    case 1:
        printf("Resultado de A X B: \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                printf("%d ", R[i][j]);
            }
            printf("\n");
            
        }
        liberaMatriz(R, n);
        break;

    case 0:
        printf("Não é possível multiplicar as matrizes A e B.\n");
        break;
    }

    liberaMatriz(A, n);
    liberaMatriz(B, p);
    

    return 0;
}

int **criaMatriz(int m, int n)
{
    if (m <= 0 || n <= 0)
    {
        return NULL;
    }
    else
    {
        int **matriz = malloc(m * sizeof(int *));

        for (int i = 0; i < m; i++)
        {
            matriz[i] = malloc(n * sizeof(int));
        }

        return matriz;
    }
}

int multiplicaMatrizes(int ***R, int **A, int n, int m, int **B, int p, int q)
{
    if (m != p)
    {
        return 0;
    }
    else
    {
        // Alocando R
        *R = criaMatriz(n, q);
        
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < q; j++)
            {
                for (int k = 0; k < p; k++)
                {
                    (*R)[i][j] = (*R)[i][j] + (A[i][k] * B[k][j]);
                }
            }
        }

        return 1;
    }
}

void liberaMatriz(int **A, int m)
{
    for(int i = 0; i < m; i++)
    {
        free(A[i]);
    }

    free(A);
}

