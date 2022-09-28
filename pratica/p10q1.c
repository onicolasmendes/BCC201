#include <stdio.h>

struct Racional{
    int numerador;
    int denominador;
};

int mdc1(int num, int dem){
    
    int resto;

    do{
        resto = num % dem;

        num = dem;
        dem = resto;
    }while(resto != 0);

    return num;
}


int equal(int numr1, int demr1, int numr2, int demr2, int *num, int *dem){

    int mdcn1 = mdc1(numr1, demr1);
    numr1 = numr1/mdcn1;
    demr1 = demr1/mdcn1;

    int mdcn2 = mdc1(numr2, demr2);
    numr2 = numr2/mdcn2;
    demr2 = demr2/mdcn2;

    if(numr1 == numr2 && demr1 == demr2)
    {
        *num = numr1;
        *dem = demr1;
        return 1;
    }
    else
        return 0;

}
int main(int argc, char const *argv[])
{
    struct Racional r1, r2;
    int num, dem;

    printf("Digite numerador e denominador de r1:");
    scanf("%d %d", &r1.numerador, &r1.denominador);

    printf("Digite numerador e denominador de r2:");
    scanf("%d %d", &r2.numerador, &r2.denominador);

    switch (equal(r1.numerador, r1.denominador, r2.numerador, r2.denominador, &num, &dem))
    {
    case 1:
        printf("r1 e r2 são iguais a (%d / %d)!\n", num, dem);
        break;
    
    default:
        printf("r1 e r2 são diferentes!\n");
        break;
    }

    return 0;
}
