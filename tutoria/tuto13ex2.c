#include <stdio.h>
#include <math.h>

typedef struct{
    double x;
    double y;
}Ponto;

typedef struct{
    Ponto centro;
    double raio;
}Circunferencia;

int main(int argc, char const *argv[])
{
    Circunferencia C1, C2;

    printf("Digite as coordenadas da circunferência C1:");
    scanf("%lf %lf %lf", &C1.centro.x, &C1.centro.y, &C1.raio);

    printf("Digite as coordenadas da circunferência C2:");
    scanf("%lf %lf %lf", &C2.centro.x, &C2.centro.y, &C2.raio);

    double distEntreCentros;

    distEntreCentros = sqrt(pow(C1.centro.x - C2.centro.x, 2) + pow(C1.centro.y - C2.centro.y, 2));

    if(C1.raio > C2.raio)
    {
        if(distEntreCentros < C1.raio - C2.raio)
            printf("C2 é interna a C1\n");
    } 
    else if(C2.raio > C1.raio)
    {
        if(distEntreCentros < C2.raio - C1.raio)
            printf("C2 é interna a C1\n");
    }
    else
    {
        printf("Não existe circunferência interna\n");
    }

    return 0;
}
