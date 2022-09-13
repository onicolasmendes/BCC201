#include <stdio.h>
#include <math.h>

void calculoDin(float *valor, float *moeda, float *nota);
void imprimir(float *moeda, float *nota, float op);

int main(){

	float valor, nota=0, moeda=0;
	
	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	calculoDin(&valor, &moeda, &nota);
	imprimir(&moeda, &nota);
	
	return 0;
}
void calculoDin(float *valor, float *moeda, float *nota){

	while(*valor % 100 == 0)
	{	
		*nota++;
	}
	
	*valor = *valor - (*nota * 100);
	*nota = 0;
	
	while(*valor % 50 == 0)
	{
		*nota++;
		
	}
	printf("%.0f nota(s) de R$50,00\n");
	*valor = *valor - (*nota *50);
	*nota = 0;



}


void imprimir(float *moeda, float *nota, float op){
	switch(op)
	{
		case 100:
			printf("%.0f nota(s) de R$100,00\n", *nota);
		break;
		case 50:
			printf("%.0f nota(s) de R$50,00\n", *nota);
		break;
		case 20:
			printf("%.0f nota(s) de R$20,00\n", *nota);
		break;
		case 10:
			printf("%.0f nota(s) de R$10,00\n", *nota);
		break;
		case 5:
			printf("%.0f nota(s) de R$5,00\n", *nota);
		break;
		case 2:
			printf("%.0f nota(s) de R$2,00\n", *nota);
		break;
		case 1:
			printf("%.0f moeda(s) de R$1,00\n",*moeda);
		break;
		case 0.5:
			printf("%.0f moeda(s) de R$0,50\n",*moeda);
		break;
		case 0.25:
			printf("%.0f moeda(s) de R$0,25\n",*moeda);
	}

}

