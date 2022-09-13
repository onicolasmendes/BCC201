#include <stdio.h>

int main(){

    //Declaração de variáveis
    int n, x, y, soma = 0;

    //Entrada do N
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        scanf("%d %d", &x, &y);
        int  impar = x;

        for(int j = 1; j <= y; j++)
        {
            int valida = 1;

            while(valida == 1)
            {
                if(impar % 2 != 0)
                {
                    soma = soma + impar;
                    valida = 0;
                }
                impar++;
            }           
        }
        
        //Saída
        printf("%d\n", soma);

        soma = 0;


    }
    return 0;
}