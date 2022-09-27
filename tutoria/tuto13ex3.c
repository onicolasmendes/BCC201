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
    Ponto p1;
    Circunferencia c1;

    printf("Digite as coordenadas de C1:");
    scanf("%lf %lf %lf", &c1.centro.x, &c1.centro.y, &c1.raio);

    printf("Digite as coordenadas de P1:");
    scanf("%lf %lf", &p1.x, &p1.y);

    double distEntrePontoRaio = sqrt(pow(p1.x - c1.centro.x, 2) + pow(p1.y - c1.centro.y, 2));

    if(distEntrePontoRaio > c1.raio)
        printf("P1 está fora de C1\n");
    else if(distEntrePontoRaio < c1.raio)
        printf("P1 está dentro da circunferência de C1\n");
    else
        printf("P1 está na circunferência C1\n");

    return 0;
}

