#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n=== Atividade 4 ===\n");
    
    float reais, dolares;
    const float taxa_cambio = 5.42;

    printf("Informe a quantia em Reais: ");
    scanf("%f", &reais);

    dolares = reais / taxa_cambio;

    printf("Valor em Reais: R$ %.2f\n", reais);
    printf("Valor equivalente em Dólares: $ %.2f\n", dolares);

    return 0;
}


