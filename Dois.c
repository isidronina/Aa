#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n ===Atividade 2 ===\n");
    
    int num_participantes;

    printf("Informe o número de pessoas presentes: ");
    scanf("%d", &num_participantes);

    float custo_carne_individual = 50.00 * 0.300, custo_linguica_individual = 28.00 * 0.200, custo_frango_individual = 22.00 * 0.150;

    float gasto_total_carne = num_participantes * custo_carne_individual, gasto_total_linguica = num_participantes * custo_linguica_individual, gasto_total_frango = num_participantes * custo_frango_individual;

    float massa_carne = num_participantes * 0.300, massa_linguica = num_participantes * 0.200, massa_frango = num_participantes * 0.150;

    float valor_geral = gasto_total_carne + gasto_total_frango + gasto_total_linguica, valor_por_pessoa = valor_geral / num_participantes;

    printf("\nQuantidades totais:\n");
    printf("Carne: %.1f kg - Linguiça: %.1f kg - Frango: %.1f kg\n", massa_carne, massa_linguica, massa_frango);

    printf("\nGastos detalhados por tipo:\n");
    printf("Carne: R$ %.2f - Linguiça: R$ %.2f - Frango: R$ %.2f\n", gasto_total_carne, gasto_total_linguica, gasto_total_frango);

    printf("\nInvestimento total do churrasco: R$ %.2f\n", valor_geral);
    printf("Cota de contribuição por participante: R$ %.2f\n", valor_por_pessoa);
    
    return 0;
}

