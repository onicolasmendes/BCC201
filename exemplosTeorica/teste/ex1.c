#include <stdio.h>
#include <math.h>

int main(){

	int i = 1;

	while(i <= 50)
	{
		printf("%.0lf\t", pow(i, 3.0));
		i++;
	}
	
	return 0;
}
