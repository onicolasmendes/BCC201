#include <stdio.h>
#include <math.h>

typedef struct{
    double x;
    double y;
}Ponto;

int main(int argc, char const *argv[])
{
    Ponto p1, p2;
    double dist;

    printf("Digite as coordenadas do ponto P1:");
    scanf("%lf %lf", &p1.x, &p1.y);

    printf("Digite as coordenadas do ponto P2:");
    scanf("%lf %lf", &p2.x, &p2.y);

    dist = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

    printf("Distância = %.3lf\n", dist);
    return 0;
}
