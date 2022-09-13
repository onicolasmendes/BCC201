#include <stdio.h>
#include <math.h>

int main(){

	int i = 1;
	
	while( i <= 20)
	{
		printf("%.0lf ", pow(i , 2.0));
		i++;
	}
	
	return 0;
}
