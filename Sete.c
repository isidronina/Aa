#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n=== Atividade 7===\n");

    char leitor[50], obra[100];
    int num_paginas;
    float segundos_pagina, horas_totais;

    printf("Informe o seu nome: ");
    scanf("%s", leitor);

    printf("Qual é o título da obra? ");
    scanf(" %[^\n]", obra);

    printf("Quantas páginas o livro possui? ");
    scanf("%d", &num_paginas);

    printf("Quantos segundos você leva, em média, para ler cada página? ");
    scanf("%f", &segundos_pagina);

    horas_totais = (num_paginas * segundos_pagina) / 3600.0;

    printf("\n%s, a estimativa para concluir a leitura de '%s' é de cerca de %.2f horas.\n", leitor, obra, horas_totais);

    return 0;
}

