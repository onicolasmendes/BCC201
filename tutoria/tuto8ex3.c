#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int n, vet[50], p=1, vetor[50], pfinal=0;

    printf("Digite o valor de n:");
    scanf("%d", &n);

    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        int a;
        a = rand() % 10;

        if(a%2 == 0)
        {
            vet[i] = 30;
        }
        else
        {
            vet[i] = 40;
        }

        printf("%d ", vet[i]);

        if(vet[i] == vet[i-1])
        {
            p++;                //se o da frente é diferente para, salva o valor no vetor , zera o contador e continua
        }
        else
        {
            vetor[i] = p;
            p = 1;
        }
    }

        for(int j =0; j < n; j++)
        {
            if(vetor[j] > vetor[j-1])
            {
                pfinal = vetor[j];
            }
        }

    printf("\n%d\n", pfinal);

    return 0;
}