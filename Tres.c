#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    printf("\n==  Atividade 3 ===\n");
    
    char discente[50];
    float nota_um, nota_dois, nota_tres, resultado_final;

    printf("Informe o nome do estudante: ");
    scanf("%s", discente);

    printf("\nInsira a primeira nota: ");
    scanf("%f", &nota_um);

    printf("\nInsira a segunda nota: ");
    scanf("%f", &nota_dois);

    printf("\nInsira a terceira nota: ");
    scanf("%f", &nota_tres);

    resultado_final = (nota_um + nota_dois + nota_tres) / 3.0;

    printf("\nO(a) aluno(a) %s obteve a média final de: %.1f\n", discente, resultado_final);
    
    return 0;
}

