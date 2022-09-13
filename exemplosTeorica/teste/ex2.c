#include <stdio.h>

int main(){

	int i = 1, n;
	double nota, soma = 0, media, maiorNota = -1;
	
	printf("\nDigite o numero de alunos para o calculo da media: ");
	scanf("%d", &n);
	
	while(i <= n)
	{
		printf("\nDigite a nota do aluno %d: ", i);
		scanf("%lf", &nota);
		
		if(nota > maiorNota)
		{
			maiorNota = nota;
		}
		
		soma+=nota;
		
		i++;
	}
	
	media = soma / n;

	printf("\nMedia = %.2lf\n\n", media);
	printf("Maior nota: %.2lf\n\n", maiorNota);
	return 0;
}
