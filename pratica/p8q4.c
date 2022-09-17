/*
Faça um programa que leia um número inteiro n≤500 digitado pelo usuário. Gere 100.000 inteiros aleatórios no intervalo de 1 a n e armazene em um vetor. Use um vetor A para manter a contagem da frequência de ocorrência de cada inteiro (ou seja, use A[1] para controlar o número de ocorrências do inteiro 1, A[2] para o inteiro 2 e assim por diante). Implemente também uma função para Imprimir o número de vezes que cada inteiro de 1 a n foi gerado.

Utilize a função rand() da biblioteca stdlib.h para gerar os números aleatórios. Configure a semente com o valor 5 (srand(5);).
*/

#include <stdio.h>
#include <stdlib.h>
#define TAMSORTEADOS 100000
#define TAMFREQ 500

int main()
{
    int n, sorteados[TAMSORTEADOS], frequencia[TAMFREQ];

    do
    {
        printf("Entre com um número inteiro <=500:");
        scanf("%d", &n);

    } while (n < 0 || n > 500);

    srand(5);

    for(int i = 0; i < TAMFREQ; i++)
    {
        frequencia[i]=0;
    }

    for(int i = 0; i < TAMSORTEADOS; i++)
    {
        sorteados[i] = rand() % n +1;
    }

    for (int i = 0; i < TAMSORTEADOS; i++)
    {
        frequencia[sorteados[i]]++;   
    }

    for (int i = 1; i <= n; i++)
    {
        printf("A[%d] = %d\n", i, frequencia[i]);
    }
    
    return 0;
}