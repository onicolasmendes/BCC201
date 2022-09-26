#include <stdio.h>
#define TAM 50

int main(int argc, char const *argv[])
{
    int matriz[TAM][TAM], n, m;

    printf("Digite o número de linhas e colunas da matriz:");
    scanf("%d %d", &n, &m);

    while(n < 1 || m < 1 || n > 500 || m > 500)
    {
        printf("ERRO - Valor inválido para n e m\nDigite novamente:");
        scanf("%d %d", &n, &m);
    }  

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    } 
    int valida;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matriz[i][j] == 0 && matriz[i][j+1] != 0)
            {
                for(int k = i +1; k < n; k++)
                {
                    for(int p = 0; p <= j; p++)
                    {
                        if(matriz[k][p] != 0)
                        {
                            valida = 4;
                            break;
                            break;
                            break;
                            break;
                        }
                    }
                }
            }
        }
    } 

    if(valida == 4)
    {
        printf("N\n");
    }


    return 0;
}
