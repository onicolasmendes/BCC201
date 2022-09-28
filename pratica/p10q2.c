#include <stdio.h>

typedef struct{
    double real;
    double imaginario;
}Complexo;

Complexo somaComplexo(Complexo x, Complexo y){

    Complexo num;
    num.real = x.real + y.real;
    num.imaginario = x.imaginario + y.imaginario;
    return num;
}

Complexo subComplexo(Complexo x, Complexo y){
    Complexo num;
    num.real = x.real - y.real;
    num.imaginario = x.imaginario - y.imaginario;
    return num;
}

Complexo multComplexo(Complexo x, Complexo y){
    Complexo num;
    num.real = (x.real * y.real) - (x.imaginario * y.imaginario);
    num.imaginario = (x.real * y.imaginario) + (x.imaginario * y.real);
    return num;
}

int main(int argc, char const *argv[])
{
    Complexo x, y;

    printf("Digite os valores de a e b (x = a + bi):");
    scanf("%lf %lf", &x.real, &x.imaginario);

    printf("Digite os valores de c e d (y = c + di):");
    scanf("%lf %lf", &y.real, &y.imaginario);
    
    char op;

    printf("Digite a operação (+, - ou *):");
    scanf(" %c", &op);

    Complexo num;
   switch(op){
        case '+':
            num = somaComplexo(x,y);
            printf("Resultado: %.1lf + %.1lfi\n", num.real, num.imaginario);
        break;
        case '-':
            num = subComplexo(x,y);
            printf("Resultado: %.1lf + %.1lfi\n", num.real, num.imaginario);
        break;
        case '*':
            num = multComplexo(x,y);
            printf("Resultado: %.1lf + %.1lfi\n", num.real, num.imaginario);
        break;
        default:
            printf("ERRO - Operação inválida\n");
        break;

    return 0;
}
}
