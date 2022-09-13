#include <stdio.h>

int main(){

    int val=1, x, y;

    while(val ==1)
    {
        printf("Digite as coordenadas x y:");
        scanf("%d %d", &x, &y);

        if(x > 0 && y > 0)
        {
            printf("primeiro\n");
        }
        else if(x < 0 && y > 0)
        {
            printf("segundo\n");
        }
        else if(x < 0 && y < 0)
        {
            printf("terceiro\n");
        }
        else if(x > 0 && y <0)
        {
            printf("quarto\n");
        }
        else{
            val = 0;
        }
    }
    return 0;
}

