#include <stdio.h>
#include <string.h>
#define TAM_MAX 11

void lerMat(double mat[][TAM_MAX], int linhas, int colunas)
{
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            scanf("%lf", &mat[i][j]);
        }
    }
}

int main(){

    //Declaração
    int valida=1, m, p, q, n;
    double mat1[TAM_MAX][TAM_MAX], mat2[TAM_MAX][TAM_MAX];

    while(valida)
    {
        printf("Entre com os valores de m, p, q, n: ");
        scanf("%d %d %d %d", &m, &p, &q, &n);

        //Validação
        if(m <= 10 && p <= 10 && q <= 10 && n <= 10 && p == q && m > 0 && p > 0 && q > 0 && n > 0)
        {
            valida = 0;
        }
        else
        {
            printf("Valores inválidos! \n");
        }
    }

    //Lendo as matrizes
    lerMat(mat1, m, p);
    lerMat(mat2, q, n);

   double prod[TAM_MAX][TAM_MAX];

   



    return 0;
}