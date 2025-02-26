#include <stdio.h>

void cadastrarCarta(char *estado, char *codigo, char *nome, int *populacao, float *area, float *pib, int *pontos_turisticos, float *densidade_populacional, float *pib_per_capita) {
    printf("Estado (A-H): ");
    scanf(" %c", estado);
    printf("Código da Carta (Ex: A01, B03): ");
    scanf("%s", codigo);
    printf("Nome da Cidade: ");
    scanf("%s", nome);
    printf("População: ");
    scanf("%d", populacao);
    printf("Área (em km²): ");
    scanf("%f", area);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", pontos_turisticos);
    printf("Densidade Populacional: ");
    scanf("%f", densidade_populacional);
    printf("Pib Per Capita: ");
    scanf("%f", pib_per_capita);
}

void exibirCarta(char estado, char *codigo, char *nome, int populacao, float area, float pib, int pontos_turisticos, float densidade_populacional, float pib_per_capita) {
    printf("- Estado: %c\n", estado);
    printf("- Código: %s\n", codigo);
    printf("- Nome da Cidade: %s\n", nome);
    printf("- População: %d\n", populacao);
    printf("- Área: %.2f km²\n", area);
    printf("- PIB: %.2f bilhões de reais\n", pib);
    printf("- Pontos Turísticos: %d\n", pontos_turisticos);
    printf("- Densidade Populacional: %.2f\n", densidade_populacional);
    printf("- Pib Per Capita: %.2f\n", pib_per_capita);
}

int main() {
    // Variáveis para a primeira carta:
    char estado1, codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

    // Cadastro: primeira carta
    printf("\n Cadastro da Carta 1\n");
    cadastrarCarta(&estado1, codigo1, nome1, &populacao1, &area1, &pib1, &pontos_turisticos1, &densidade_populacional1, &pib_per_capita1);

    // Variáveis para a segunda carta:
    char estado2, codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Cadastro: segunda carta
    printf("\n Cadastro da Carta 2\n");
    cadastrarCarta(&estado2, codigo2, nome2, &populacao2, &area2, &pib2, &pontos_turisticos2, &densidade_populacional2, &pib_per_capita2);

    // Exibição das cartas cadastradas
    printf("\n Cartas Cadastradas \n");

    printf("\n Carta 1:\n");
    exibirCarta(estado1, codigo1, nome1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1);

    printf("\n Carta 2:\n");
    exibirCarta(estado2, codigo2, nome2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    return 0;
}
