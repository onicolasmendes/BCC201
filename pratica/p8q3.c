#include <stdio.h>

void fibo(int *vetor, int n)
{
    vetor[0] = 1;
    vetor[1] = 1;
    for(int i = 2; i < n; i++)
    {
        vetor[i] = vetor[i-1] + vetor[i-2];
    }
}

int main(){

    int n, vetor[50];

    printf("Digite o valor de n:");
    scanf("%d", &n);

    fibo(vetor, n);

    for(int i = 0; i<n; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}