#include <stdio.h>
//Elabore um algoritmo que calcule e imprima os m´ultiplos de 3, compreendidos no intervalo entre 6 e um dado limite superior fornecido pelo usu´ario.

int main(){

	int i = 6, n;
	
	//entrada
	printf("Digite o limite superior a 6: ");
	scanf("%d", &n);
	
	if(n > 6)
	{
		while(i <= n)
		{
			if(i%3 == 0)
			{
				printf("%d\t", i);
			}
			i++;
		}
	}
	else
	{
		printf("\nERRO - O numero %d informado nao e superior a 6\n", n);
	}
	
	return 0;
}
