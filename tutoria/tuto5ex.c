#include <stdio.h>
#include <math.h>
int cal(float *valor, float div){
	int quant;
	quant = (int) floor(*valor / div);  //arredonda pra baixo
	*valor = *valor - (quant * div);
	return quant;
}

void imprimir(int quant, float div){
	if(div > 1)
		printf("%d nota(s) de R$%.2f\n", quant, div);
	else
		printf("%d moeda(s) de R$%.2f\n", quant, div);
}

int main(){
	float valor;
	
	printf("Digite um valor: ");
	scanf("%f", &valor);
	
	imprimir(cal(&valor, 100), 100);
	imprimir(cal(&valor, 50), 50);
	imprimir(cal(&valor, 20), 20);
	imprimir(cal(&valor, 10), 10);
	imprimir(cal(&valor, 5), 5);
	imprimir(cal(&valor, 2), 2);
	imprimir(cal(&valor, 1), 1);
	imprimir(cal(&valor, 0.5), 0.5);
	imprimir(cal(&valor, 0.25), 0.25);
	imprimir(cal(&valor, 0.10), 0.10);
	imprimir(cal(&valor, 0.05), 0.05);
	printf("%f", valor);
	imprimir(cal(&valor, 0.01), 0.01);
	
	return 0;
}

