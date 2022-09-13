#include <stdio.h>

int quad(float *l1, float *l2);
void peri(float *l1, float *l2, float *per);
void are(float *l1, float *l2, float *area);

int main(){

	float l1, l2, per, area;
	int op;
	
	printf("Digite os valores dos lados do retangulo: ");
	scanf("%f %f", &l1, &l2);
	
	op = quad(&l1, &l2);
	
	switch(op)
	{
		case 1:
			printf("É quadrado\n");
		break;
		case 0:
			printf("Não é quadrado\n");
		break;
	}
	
	peri(&l1, &l2, &per);
	are(&l1, &l2, &area);

	printf("Perímetro = %.2f\n", per);
	printf("Área = %.2f\n", area);
	
	return 0;
}
int quad(float *l1, float *l2){
	if(*l1 == *l2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void peri(float *l1, float *l2, float *per){
	*per = *l1 * 2 + *l2 * 2;
}

void are(float *l1, float *l2, float *area){
	*area = *l1 * *l2;
}
