#include <stdio.h>


int main() {
    // Carta 1
    char estado1;
    char codigo1[4];           
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1; // em bilhoes
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;

    // Carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2; // em bilhoes
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;

    // cadastro carta 1
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1); // Um caracter

    printf("Codigo da Carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da Cidade (use underline no lugar de espaco, ex: Sao_Paulo): ");
    scanf("%49s", nomeCidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhoes para reais antes de calcular o per capita 

    // Cadastro carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%3s", codigo2);

    printf("Nome da Cidade (use underline no lugar de espaco, ex: Rio_de_Janeiro): ");
    scanf("%49s", nomeCidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // exibindo resultado
    printf("\n\n===== DADOS CADASTRADOS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}