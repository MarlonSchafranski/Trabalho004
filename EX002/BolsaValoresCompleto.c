#include<stdio.h>
#include<stdlib.h>

typedef struct BolsaValoresCompleta
{
    char   nome[100];
    char   areaAtuacao[100];
    double valorAtual;
    double valorAnterior;
    double variacao;
}Acao;

void imprimeAcao(Acao acao){
    printf("Nome da compania:", acao.nome);
    printf("Area de atuação:", acao.areaAtuacao);
    printf("Valor atual: ",acao.valorAtual);
    printf("valor anterior: ", acao.valorAnterior);
    printf("digite a varacao das Ações: ", acao.variacao);
}

int main(int argc, char const *argv[])
{
    Acao acao1, acao2, acao3;
    int i;

    //Acao 1
    printf("Preencha a  ação 1:\n");
    printf("digite o nome da compania: ");
    scanf("%s", acao1.nome);
    printf("digite a area de atuação: ");
    scanf("%s", acao1.areaAtuacao);
    printf("digite o valor atual ");
    scanf("%lf", &acao1.valorAtual);
    printf("digite o valor anterior ");
    scanf("%lf", &acao1.valorAnterior);
    acao1.variacao = (acao1.valorAtual - acao1.valorAnterior) / acao1.valorAnterior * 100;
    printf("\n");

    //acao 2
    printf("Preencha a ação 2: ");
    printf("digite o nome da campania: ");
    scanf("%s", acao2.nome);
    printf("digite a area de atuação: ");
    scanf("%s", acao2.areaAtuacao);
    printf("digite o valor atual da ação: ");
    scanf("%lf", acao2.valorAtual);
    printf("digite o valor anterior da atuação: ");
    scanf("%lf",acao2.valorAnterior);
    acao2.variacao = (acao2.valorAtual - acao2.valorAnterior) / acao2.valorAnterior * 100;
    printf("\n");

    //acao3
    
    printf("Preencha a ação 3: ");
    printf("digite o nome da campania: ");
    scanf("%s", acao3.nome);
    printf("digite a area de atuação: ");
    scanf("%s", acao3.areaAtuacao);
    printf("digite o valor atual da ação: ");
    scanf("%lf", acao3.valorAtual);
    printf("digite o valor anterior da atuação: ");
    scanf("%lf",acao3.valorAnterior);
    acao3.variacao = (acao3.valorAtual - acao3.valorAnterior) / acao3.valorAnterior * 100;      
    printf("\n");
    return 0;
}