#include <stdio.h>

typedef struct {
    char nome[50];
    char area[50];
    double valorAtual;
    double valorAnterior;
    double variacao;
} Acao;

void calcularVariacao(Acao *acao) {
    acao->variacao = ((acao->valorAtual - acao->valorAnterior) / acao->valorAnterior) * 100;
}

int main() {
    Acao acao1 = {"Empresa A", "Tecnologia", 100.0, 90.0, 0.0};
    calcularVariacao(&acao1);
    printf("nome: %s\n", acao1.nome);
    printf("area: %s\n", acao1.area);
    printf("valor atual: %.2f\n", acao1.valorAtual);
    printf("valor anterior: %.2f\n", acao1.valorAnterior);
    printf("variação: %.2f%%\n", acao1.variacao);
    return 0;
}