#include <stdio.h>
#include <string.h>
#include <conio.h>

int main(){

    char mat[15], mat1[15];

    printf("Digite a matéria:");
    fgets(mat, 15, stdin);

    strcpy(mat, mat1);

    printf("%s", mat1);

    getch();

    return 0;
}