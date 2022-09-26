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
   
   int j=0, valida;
   for(int i = 0; i < n; i++)
   {   
        if(matriz[i][j] != 0)
        {
           
            int col = j;
            for(int g = i+1; g < n; g++)
            {
                if(matriz[g][col] != 0)
                {
                    printf("N\n");
                    return 0;
                }
                col++;
            }
        }
        j++;   
   }

    int contzero=0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(matriz[i][j] == 0)
            {
                contzero++;
            }
        }
        if (contzero == n)
        {
            for(int h = i +1; h < n; h++)
            {
                for(int w = 0; w < m; w++)
                {
                    if(matriz[h][w] != 0)
                    {
                        printf("N\n");
                        return 0;
                    }
                }
            }
        }
    }

    printf("S\n");


    return 0; 
}
