#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n=== Atividade 10===\n");

    char objetivo[100];
    float valor_alvo, rendimento_mensal, gastos_totais;
    float saldo_liquido, guardado_fixo, verba_disponivel, meses_necessarios;

    printf("Qual é o seu objetivo financeiro? ");
    scanf(" %[^\n]", objetivo);

    printf("Quanto custa para realizar essa meta? ");
    scanf("%f", &valor_alvo);

    printf("Informe o seu rendimento mensal: ");
    scanf("%f", &rendimento_mensal);

    printf("Quais são os seus gastos totais no mês? ");
    scanf("%f", &gastos_totais);

    saldo_liquido = rendimento_mensal - gastos_totais;
    guardado_fixo = saldo_liquido * 0.30;
    verba_disponivel = saldo_liquido - guardado_fixo;
    meses_necessarios = valor_alvo / verba_disponivel;

    printf("\nObjetivo: %s (R$ %.2f)\n", objetivo, valor_alvo);
    printf("Rendimento: R$ %.2f - Gastos: R$ %.2f\n\n", rendimento_mensal, gastos_totais);
    printf("Saldo após os gastos: R$ %.2f\n", saldo_liquido);
    printf("Reserva obrigatória (30%%): R$ %.2f\n", guardado_fixo);
    printf("Montante disponível para o objetivo: R$ %.2f por mês\n", verba_disponivel);
    printf("Tempo previsto para alcançar a meta: %.2f meses\n", meses_necessarios);

    return 0;
}


