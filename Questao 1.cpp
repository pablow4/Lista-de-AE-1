#include <stdio.h>

int main() {
    float custo, frete, despesas, venda, lucro;

    printf("Digite o custo da mercadoria: R$");
    scanf("%f", &custo);

    printf("Digite o valor do frete: R$");
    scanf("%f", &frete);

    printf("Digite o valor das despesas eventuais: R$");
    scanf("%f", &despesas);

    venda = custo + frete + despesas;

    printf("Digite o valor de venda: R$");
    scanf("%f", &venda);

    lucro = ((venda - custo) / custo) * 100;

    printf("Percentual de lucro: %.2f%%\n", lucro);

    return 0;
}
