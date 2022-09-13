#include <stdio.h>

/*Um número natural é primo se ele possui apenas dois divisores distintos. Assim, um número maior que 1 é primo se for divisível apenas por si próprio e por 1.

Crie uma função que retorna 1 se o número passado como argumento for primo e 0 caso contrário. Sua função deve seguir o protótipo:

int primo(int n);

Implemente também a função main() para ler o valor de n e imprimir se n é primo ou não.*/

int primo(int n){
    int cont=0, i = 1;

    while(i <= n){
        if(n % i == 0)
        {
            cont++;
        }

        i++;
    }

    if(cont == 2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){

    int n, op;

    printf("Digite um número: ");
    scanf("%d", &n);

    op = primo(n);

    switch(op)
    {
        case 1:
            printf("%d é um número primo!\n", n);
        break;

        case 0:
            printf("%d não é um número primo!\n", n);
        break;
    }

    return 0;
}