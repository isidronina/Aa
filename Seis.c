#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n=== Atividade 6 ===\n");

    char usuario[50];
    float massa, estatura, indice_massa;

    printf("Informe o seu nome: ");
    scanf("%s", usuario);

    printf("\nInforme a sua altura (em metros): ");
    scanf("%f", &estatura);

    printf("\nInforme o seu peso (em quilos): ");
    scanf("%f", &massa);

    indice_massa = massa / (estatura * estatura);

    printf("\n%s, o seu IMC calculado é de %.4f\n", usuario, indice_massa);
    
    return 0;
}

