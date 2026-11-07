#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n=== Atividade 5 ===\n");

    char cliente[50];
    float preco_inicial, percentual_desconto, valor_a_pagar;
    
    printf("Informe o seu nome: ");
    scanf("%s", cliente);

    printf("Qual é o valor total da compra? ");
    scanf("%f", &preco_inicial);

    printf("Qual é a porcentagem do seu cupom de desconto? ");
    scanf("%f", &percentual_desconto);

    valor_a_pagar = preco_inicial - (preco_inicial * (percentual_desconto / 100.0));

    printf("\nOlá %s, sua compra no valor de R$ %.2f foi registrada com sucesso!\n", cliente, preco_inicial);
    printf("Foi aplicado um abatimento de %.2f%%.\n", percentual_desconto);
    printf("O valor final com desconto ficou em R$ %.2f\n", valor_a_pagar);

    return 0;
}



