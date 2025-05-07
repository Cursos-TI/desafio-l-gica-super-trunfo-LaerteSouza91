#include <stdio.h>

struct CartaPais {
    char nome[50];
    int populacao;    // em milhões
    float pib;        // em trilhões de dólares
    float area;       // em milhões de km²
};

int main() {
    struct CartaPais pais1, pais2;

    // Leitura dos dados do primeiro país
    printf("Digite o nome do primeiro país (sem espaços): ");
    scanf("%s", pais1.nome);

    printf("População (em milhões): ");
    scanf("%d", &pais1.populacao);

    printf("PIB (em trilhões de dólares): ");
    scanf("%f", &pais1.pib);

    printf("Área (em milhões de km²): ");
    scanf("%f", &pais1.area);

    // Leitura dos dados do segundo país
    printf("\nDigite o nome do segundo país (sem espaços): ");
    scanf("%s", pais2.nome);

    printf("População (em milhões): ");
    scanf("%d", &pais2.populacao);

    printf("PIB (em trilhões de dólares): ");
    scanf("%f", &pais2.pib);

    printf("Área (em milhões de km²): ");
    scanf("%f", &pais2.area);

    // Comparações
    printf("\n--- Comparação das cartas ---\n");

    // População
    printf("População: ");
    if (pais1.populacao > pais2.populacao)
        printf("%s vence\n", pais1.nome);
    else if (pais2.populacao > pais1.populacao)
        printf("%s vence\n", pais2.nome);
    else
        printf("Empate\n");

    // PIB
    printf("PIB: ");
    if (pais1.pib > pais2.pib)
        printf("%s vence\n", pais1.nome);
    else if (pais2.pib > pais1.pib)
        printf("%s vence\n", pais2.nome);
    else
        printf("Empate\n");

    // Área
    printf("Área: ");
    if (pais1.area > pais2.area)
        printf("%s vence\n", pais1.nome);
    else if (pais2.area > pais1.area)
        printf("%s vence\n", pais2.nome);
    else
        printf("Empate\n");

    return 0;
}
