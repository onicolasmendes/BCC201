#include <stdio.h>

int maior(int *vetor, int tamanho)
{
    int maior = -1;

    for(int i = 0; i < tamanho; i++)
    {
        if(vetor[i] > maior)
            maior = vetor[i];
    }

    return maior;
}

int main(){
    //Declaração de variáveis
    int tamanho, vetor[100];

    printf("Digite o número de números:");
    scanf("%d", &tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("Digite o número %d:", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("Maior número: %d\n", maior(vetor, tamanho));

    return 0;
}

