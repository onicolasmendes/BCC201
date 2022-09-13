#include <stdio.h>
/*
Crie uma função que retorna o fatorial de um número passado por parâmetro. Use o seguinte protótipo:

long long fat(int n);

Lembre-se que 6!=6×5×4×3×2×1 e que devemos utilizar o formato "\%lld" para imprimir um long long.

Em seguida, implemente a função main() para ler o valor de n e imprimir o resultado de fat(n).

Siga os exemplos de execução (valores digitados pelo usuário destacados em azul):
*/

long long fat(int n){
    
    int i = n;
    long long fat = 1;

    while(i >= 1)
    { 
        fat = fat * i;
        i--;
    }

    return fat;
}

int main(){

    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("%d! = %lld\n", n, fat(n));

    return 0;
}