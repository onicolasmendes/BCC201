#include <stdio.h>
#include <math.h>

int main(){
    int n, i=1;
    double pi, s=1;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    while(i < n)
    {
        s = s + pow(-1,i) * (1/(pow(1+2*i, 3))); 
        i++;
    }

    pi = cbrt(s * 32);

    printf("pi = %.4lf\n", pi);
    
    return 0;
}