#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n=== Atividade 9===\n");

    int circuito_metros, numero_voltas, duracao_volta;
    float percurso_km, tempo_estimado;

    printf("Informe o comprimento da pista (em metros): ");
    scanf("%d", &circuito_metros);

    printf("Informe o número total de voltas: ");
    scanf("%d", &numero_voltas);

    printf("Informe a duração da volta em segundos: ");
    scanf("%d", &duracao_volta);

    percurso_km = (circuito_metros * numero_voltas) / 1000.0;
    tempo_estimado = (duracao_volta * numero_voltas) / 60.0;

    printf("\nRelatório de Desempenho Gerado\n");
    printf("----------------------------------\n");
    printf("Extensão total percorrida: %.2f km.\n", percurso_km);
    printf("Tempo estimado de prova: %.1f minutos.\n", tempo_estimado);

    return 0;
}

