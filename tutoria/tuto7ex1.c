#include <stdio.h>

int main(){

	int rodadas, n1, n2, p1 = 0, p2 = 0, i = 0;
	
	printf("Digite o número de rodadas: ");
	scanf("%d", &rodadas);
	
	if(rodadas != 0)
	{
		while(i < rodadas)
		{
			printf("Digite os números: ");
			scanf("%d %d", &n1, &n2);
				
			while(n1 < 0 || n1 > 10 || n2 < 0 || n2 > 10)
			{
				printf("\nErro - Os numeros devem entrar entre 0 e 10! - tente novamente!\n\n");
				printf("Digite os números: ");
				scanf("%d %d", &n1, &n2);
			}
			
			if(n1 > n2)
			{
				p1++;
			}
			else if (n2 > n1)
			{
				p2++;
			}
			i++;
		}
		printf("%d %d\n", p1, p2);
	}
	
	return 0;
}
