#include <stdio.h>
#define TAM 15

int main(){

    int vet[TAM], n;

    printf("Entre com os %d valores:", TAM);

    for(int i = 0; i < TAM; i++)
    {
        scanf("%d", &vet[i]);
    }

    printf("Entre com os valores de n:");
    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {   
        int aux;
        aux = vet[0];

        for(int i = 0; i < TAM; i++)
        {
            vet[i] = vet[i+1];
        }
       
        vet[TAM-1] = aux;
    }

    for(int i =0; i < TAM; i++)
    {
        printf("%d ", vet[i]);
    }

    printf("\n");

    return 0;
}