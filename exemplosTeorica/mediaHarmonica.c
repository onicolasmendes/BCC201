#include <stdio.h>

int main(){

	//declaração de variáveis
	int n, i = 1;
	float soma = 0, h, x;
	
	//entrada
	printf("\nMédia harmônica\nDigite quantos números você quer digitar: ");
	scanf("%d", &n);
	
	while (i <= n)
	{
		printf("Número %d: ", i);
		scanf("%f", &x);
		
		soma = soma + (1 / x);
		
		i++;
		
	}
	
	h = n / soma;
	
	printf("\nMédia Harmônica: %.2f\n", h);


	return 0;
}
