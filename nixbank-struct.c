#include <stdio.h>
#include <string.h>
#define TAM 100

typedef struct{
    char nome[TAM];
    int agencia;
    double valorConta;
    char pais[20];
    char profissao[TAM];
    int perfilInvestidor;
} Conta;

Conta inserir();
void imprimeDados(Conta p[], int n);
void imprimeNomeCertoValor(Conta p[], int n, double valor);
void imprimeNomeEPaisInvestidor(Conta p[], int n, int op);

int main(){
    Conta p[TAM];
    int n = 0, op, opPerfil;
    double valor;
    printf("███╗░░██╗██╗██╗░░██╗██████╗░░█████╗░███╗░░██╗██╗░░██╗\n████╗░██║██║╚██╗██╔╝██╔══██╗██╔══██╗████╗░██║██║░██╔╝\n██╔██╗██║██║░╚███╔╝░██████╦╝███████║██╔██╗██║█████═╝░\n██║╚████║██║░██╔██╗░██╔══██╗██╔══██║██║╚████║██╔═██╗░\n██║░╚███║██║██╔╝╚██╗██████╦╝██║░░██║██║░╚███║██║░╚██╗\n╚═╝░░╚══╝╚═╝╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝\n");
    do{
        printf("1 - Inserir novo cliente\n");
        printf("2 - Exibir dados de todos os clientes cadastrados no sistema\n");
        printf("3 - Exibir nomes de todos os clientes com saldo superior a um valor específico\n");
        printf("4 - Exibir nome e país de investidores pertencentes a um mesmo perfil de investidor\n");
        printf("0 - Sair\n");
        printf("Digite a opção escolhida:");
        scanf("%d", &op);
        getchar();

        switch(op){
            case 1:
                p[n] = inserir();
                n++;
            break;
            case 2:
                imprimeDados(p, n);
            break;
            case 3:
                printf("Digite o valor específico:");
                scanf("%lf", &valor);
                imprimeNomeCertoValor(p, n, valor);
            break;
            case 4:
                printf("\n1-Conservador\n2-Risco médio\n3-Alto Risco\n\nDigite o código correspondente para o perfil de investidor selecionado:");
                scanf("%d", &opPerfil);
                imprimeNomeEPaisInvestidor(p, n, opPerfil);
            break;
            case 0:
                printf("O programa foi encerrado\n");
            break;
            default:
                printf("ERRO - Opção inválida\n");
            break;
        }
    }while(op != 0);
    return 0;
}

Conta inserir(){
    Conta p;
    printf("Digite o nome completo do cliente:");
    fgets(p.nome, TAM, stdin);
    p.nome[strlen(p.nome) - 1] = '\0';
    printf("Digite o código da agência em que a conta será criada:");
    scanf("%d", &p.agencia);
    printf("Digite o valor inicial da conta:");
    scanf("%lf", &p.valorConta);
    getchar();
    printf("Digite o país de origem do cliente:");
    fgets(p.pais, 20, stdin);
    p.pais[strlen(p.pais) - 1] = '\0';
    printf("Digite a profissão do cliente:");
    fgets(p.profissao, TAM, stdin);
    p.profissao[strlen(p.profissao) - 1] = '\0';
    printf("\n1-Conservador\n2-Risco médio\n3-Alto Risco\n\nDigite o código correspondente ao perfil de investidor do cliente:");
    scanf("%d", &p.perfilInvestidor);
    return p;
}

void imprimeDados(Conta p[], int n){
    for(int i = 0; i < n; i++)
    {
        char investidor[20];
        if(p[i].perfilInvestidor == 1)
        {
            strcpy(investidor, "Conservador");
        }
        else if(p[i].perfilInvestidor == 2)
        {
            strcpy(investidor, "Risco médio");
        }
        else    
            strcpy(investidor, "Alto Risco");
        
        printf("%s\t%d\t%.2lf\t%s\t%s\t%s\n", p[i].nome, p[i].agencia, p[i].valorConta, p[i].pais, p[i].profissao, investidor);
    }
}

void imprimeNomeCertoValor(Conta p[], int n, double valor){
    for(int i = 0; i < n; i++)
    {
        if(p[i].valorConta > valor)
        {
            printf("%s\n", p[i].nome);
        }
    }
}

void imprimeNomeEPaisInvestidor(Conta p[], int n, int op){
    for(int i = 0; i < n; i++)
    {
        if(p[i].perfilInvestidor == op)
        {
           printf("%s\t%s\n", p[i].nome, p[i].pais);
        }
    }
}
