#include <stdio.h>
#include <stdlib.h>

void ordena(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (vetor[i] > vetor[j])
            {
                int temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Digite o valor de n:");
    scanf("%d", &n);

    int *vet1 = malloc(n * sizeof(int));

    printf("Digite os valores do vetor: ");
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vet1[i]);
        soma += vet1[i];
    }

    ordena(vet1, n);

    double media = soma / (double)n;

    int contAcimaIgualMedia = 0, contAbaixoMedia = 0;

    for (int i = 0; i < n; i++)
    {
        if (vet1[i] >= media)
        {
            contAcimaIgualMedia++;
        }
        else
        {
            contAbaixoMedia++;
        }
    }

    int *vet2 = malloc(contAcimaIgualMedia * sizeof(int));
    int *vet3 = malloc(contAbaixoMedia * sizeof(int));

    int contabaixo = 0, contacima = 0;
    for (int i = 0; i < n; i++)
    {
        if (vet1[i] >= media)
        {
            vet2[contacima] = vet1[i];
            contacima++;
        }
        else
        {
            vet3[contabaixo] = vet1[i];
            contabaixo++;
        }
    }

    printf("A média é: %.2g\n", media);
    printf("Vetor com os valores abaixo da média: [");
    for (int i = 0; i < contAbaixoMedia; i++)
    {
        printf(" %d", vet3[i]);
    }
    printf(" ]\n");
    printf("Vetor com os valores iguais ou acima da média: [");
    for (int i = 0; i < contAcimaIgualMedia; i++)
    {
        printf(" %d", vet2[i]);
    }
    printf(" ]\n");

    free(vet2);
    free(vet3);
    free(vet1);

    return 0;
}
