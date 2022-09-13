#include <stdio.h>

int main(){

    int n, v1[15], v2[15], v3[30];

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &v1[i]);
    }

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &v2[i]);
    }

    int p = 0;
    int m = n-1;

    for(int i = 0; i < 2*n; i++)
    {
        if(i%2 == 0)
        {
            v3[i] = v1[p];
            p++; 
        }
        else
        {
            v3[i] = v2[m];
            m--;
        }
    }

    for(int i = 0; i < 2*n; i++)
    {
        printf("%d ", v3[i]);
    }

    printf("\n");
    
    return 0;
}