#include <stdio.h>

int main(){

    int vet[5];
    int maior, menor;

    for(int i = 0; i < 5; i++)
    {
        printf("Digite um valor inteiro:");
        scanf("%d", &vet[i]);

        if(i == 0)
        {
            maior = vet[i];
            menor = vet[i];
        }

        if(vet[i] > maior)
        {
            maior = vet[i];
        }

        if(vet[i] < menor)
        {
            menor = vet[i];
        }

    }
    printf("Menor = %d\n", menor);
    printf("Maior = %d\n", maior);

    return 0;
}