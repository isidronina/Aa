#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n=== atividade 8 ===\n");

    int unidades_pequeno, unidades_medio, unidades_grande;
    float percentual_cupom, valor_parcial, valor_a_pagar;

    printf("Informe a quantidade de Açaí tamanho Pequeno: ");
    scanf("%d", &unidades_pequeno);

    printf("Informe a quantidade de Açaí tamanho Médio: ");
    scanf("%d", &unidades_medio);

    printf("Informe a quantidade de Açaí tamanho Grande: ");
    scanf("%d", &unidades_grande);

    printf("Insira o percentual do cupom promocional: ");
    scanf("%f", &percentual_cupom);

    valor_parcial = (unidades_pequeno * 13.50) + (unidades_medio * 15.00) + (unidades_grande * 17.50);
    valor_a_pagar = valor_parcial - (valor_parcial * (percentual_cupom / 100.0));

    printf("\nResumo do seu pedido:\n");
    printf("- Açaí Pequeno: %d\n", unidades_pequeno);
    printf("- Açaí Médio: %d\n", unidades_medio);
    printf("- Açaí Grande: %d\n\n", unidades_grande);
    printf("Desconto de %.0f%% aplicado com sucesso.\n", percentual_cupom);
    printf("Valor total a pagar: R$ %.2f\n", valor_a_pagar);

    return 0;
}



