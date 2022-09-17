#include <stdio.h>
#define TAM 30

float medTemp(float temp[TAM])
{
    float soma=0, media;
    for(int i = 0; i < TAM; i++)
    {
        soma += temp[i];
    }
    media = soma / TAM;
    return media;
}
int main(){

    float temp[TAM];

    printf("Entre com as temperaturas:");

    for(int i = 0; i < TAM; i++)
    {
        scanf("%f", &temp[i]);
    }

    float media = medTemp(temp);

    int diaAcimaMed = 0, diaAbaixoMed = 0;
    
    for(int i = 0; i < TAM; i++)
    {
        if(temp[i] > media)
            diaAcimaMed++;
        else if(temp[i] < media)
            diaAbaixoMed++;
    }

    printf("Acima: %d\n", diaAcimaMed);
    printf("Abaixo: %d\n", diaAbaixoMed);

    return 0;
}