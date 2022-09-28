#include <stdio.h>
#include <string.h>
#define TAM_ALUNOS 30
#define TAM_NOME 50

 int main(int argc, char const *argv[])
 {
    FILE *arquivo = fopen("alunos.txt", "r");
    
    int alunos;
    fscanf(arquivo,"%d", &alunos);

    char nome[TAM_NOME];
    char nomes[TAM_ALUNOS][TAM_NOME];
    float notas[TAM_ALUNOS];
    int frequencias[TAM_ALUNOS];

    int cont = 0;

    for(int i = 0; i < alunos; i++)
    {
        fscanf(arquivo, "%s %f %d\n", nome, &notas[i], &frequencias[i]);
      
        for(int j = 0; j < (int)strlen(nome); j++)
        {
            nomes[cont][j] = nome[j];
            cont++;
        }

        nomes[cont][(int)strlen(nome)] = '\0';

        cont = 0;
    }

    float somaNota = 0;

    for(int i = 0; i < alunos; i++)
    {
        somaNota += notas[i];
    }

    float mediaNotas = somaNota / alunos;

    float somaFrequencia = 0;

    for(int i = 0; i < alunos; i++)
    {
        somaFrequencia += frequencias[i];
    }

    float mediaFrequencias = somaFrequencia / alunos;

    int contAprovados = 0;

    for(int i = 0; i < alunos; i++)
    {
        if(notas[i] >= 6 && frequencias[i] >= 75)
        {
            contAprovados++;
        }
    } 

    float percentualAprovacao = (contAprovados / alunos) * 100;

    printf("Nota média: %.1f\n", mediaNotas);
    printf("Frequência média: %.0f\n", mediaFrequencias);
    printf("Percentual de aprovação: %.0f\n", percentualAprovacao);
    printf("Nomes dos alunos com nota acima da média:\n");

    for(int i = 0; i < alunos; i++)
    {
        int j = 0;
        if(notas[i] > 6)
        {
          
            while(nomes[i][j] != '\0')
            {
                printf("%c", nomes[i][j]);
            }

            printf("\n");
        }
    }

    fclose(arquivo);

    return 0;
 }
 