#include <stdio.h>

int primo(int valor){
	int i=1, cont=0;
	
	while(i <= valor)
	{
		if(valor % i == 0)
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
	
	int min, max;
	
	scanf("%d %d", &min, &max);
	
	for(int i = min; i <= max; i++)
	{
	
		switch(primo(i))
		{
			case 1:
				printf("O menor primo no intervalo entre [%d, %d] é %d\n", min, max, i);
				return 0;	
		}
	}
	
	
		printf("[%d, %d] não possui numeros primos nesse intervalo\n", min, max);
		
	return 0;
}
