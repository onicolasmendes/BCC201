#include <stdio.h>
#include <string.h>
#define TAM_NOME 50
#define TAM_ALUNOS 30

typedef struct{
        char nome[TAM_NOME];
        float nota;
        int frequencia;
}Aluno;

int main(int argc, char const *argv[])
{
    Aluno alunos[TAM_ALUNOS];
    int n=0;

    printf("Digite 1 para entrar um aluno ou 0 para encerrar:");
    scanf("%d", &n);

    FILE *arquivo = fopen("alunos.txt", "w");

    int cont = 0;
    
    while(n){
        scanf("%s %f %d", alunos[cont].nome, &alunos[cont].nota, &alunos[cont].frequencia);
        cont++;
        printf("Digite 1 para entrar um aluno ou 0 para encerrar:");
        scanf("%d", &n);
    }

    fprintf(arquivo, "%d\n\n", cont);

    for(int i = 0; i < cont; i++){
        fprintf(arquivo, "%s %.1f %d\n\n", alunos[i].nome, alunos[i].nota, alunos[i].frequencia);
    }

    fclose(arquivo);

    return 0;
}
