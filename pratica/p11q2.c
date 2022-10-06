#include <stdio.h>
#include <stdlib.h>

double **transposta(double **A, int m, int n);
double **criaMatriz(int m, int n);
void liberaMatriz(double **A, int m);

int main(int argc, char const *argv[])
{
    int m, n;
    printf("Digite o valor de m e n:");
    scanf("%d %d", &m, &n);

    double **mat;

    mat = criaMatriz(m, n);

    printf("Digite a matriz:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }

    double **trans;

    trans = criaMatriz(n, m);

    trans = transposta(mat, m, n);

    printf("Transposta: \n"); 

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.0lf ", trans[i][j]);
        }
        printf("\n");
        
    }

    liberaMatriz(mat, m);
    liberaMatriz(trans, n);

    return 0;
}

double **criaMatriz(int m, int n)
{
    if (n <= 0 || m <= 0)
    {
        return NULL;
    }
    else
    {
        double **matriz = malloc(m * sizeof(double *));

        for (int i = 0; i < m; i++)
        {
            matriz[i] = malloc(n * sizeof(double));
        }

        return matriz;
    }
}

double **transposta(double **A, int m, int n)
{
    double **matriz = criaMatriz(n, m);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matriz[i][j] = A[j][i];
        }
        
    }

    return matriz;   
}

void liberaMatriz(double **A, int m)
{
    for(int i = 0; i < m; i++)
    {
        free(A[i]);
    }

    free(A);
}
