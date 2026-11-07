#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    
    char estudante[50], graduacao[25], passatempo[50];
    int periodo;

    printf("\n=====Atividade 1 ====\n");
    
    printf("\nInforme o seu nome: ");
    scanf("%s", estudante);

    printf("\nQual é a sua formação/curso? ");
    scanf("%s", graduacao);

    printf("\nEm qual período letivo você está? ");
    scanf("%d", &periodo);

    printf("\nQual é o seu passatempo favorito? ");
    scanf("%s", passatempo);

    printf("Muito prazer, sou o(a) %s.\nAtualmente estou no %d° período de %s,\n e meu passatempo favorito é %s.\n", estudante, periodo, graduacao, passatempo);
    
    return 0;
}

