#include <stdio.h>

int main(){
    int con[5], con1[5];

    
    for(int i = 0; i < 5; i++)
    {
        int aux;
        scanf("%d", &aux);

        while(aux != 0 && aux != 1)
        {
            printf("\nERRO - Entrada inválida\n");
            scanf("%d", &aux);
        }

        con[i] = aux;    
        }

    for(int i = 0; i < 5; i++)
    {
        int aux;
        scanf("%d", &aux);

        while(aux != 0 && aux != 1)
        {
            printf("\nERRO - Entrada inválida\n");
            scanf("%d", &aux);
        }

        con1[i] = aux;
    }

    for(int i = 0; i < 5; i++)
    {
        if(con[i] == con1[i])
        {
            printf("N\n");
            return 0;
        }
    }

    printf("Y\n");
    return 0;
}