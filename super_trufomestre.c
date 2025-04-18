#include <stdio.h>

int main() {
    // Declaração das variáveis para a Carta 1
    char estado1;
    char codigo1[4];      // Exemplo: "A01" (3 caracteres + '\0')
    char cidade1[100];    // Espaço para o nome da cidade
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1, pibpercapita1, superpoder1;

    // Declaração das variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2, pibpercapita2, superpoder2;

    // Entrada de dados para a Carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);  // O espaço antes de %c ignora caracteres de espaço em branco
    printf("Código (ex: A01): ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // Lê a linha inteira até encontrar um '\n'
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos - Carta 1
    densidade1 = populacao1 / area1;
    pibpercapita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para reais
    superpoder1 = populacao1 + area1 + (pib1 * 1000000000.0) + pontosTuristicos1 + pibpercapita1 + (1.0 / densidade1);

    // Entrada de dados para a Carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: B02): ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos - Carta 2
    densidade2 = populacao2 / area2;
    pibpercapita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para reais
    superpoder2 = populacao2 + area2 + (pib2 * 1000000000.0) + pontosTuristicos2 + pibpercapita2 + (1.0 / densidade2);

    // Exibição dos dados da Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);

    // Exibição dos dados da Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: %s venceu (%d)\n", (populacao1 > populacao2 ? "Carta 1" : "Carta 2"), populacao1 > populacao2 ? 1 : 0);
    printf("Área: %s venceu (%d)\n", (area1 > area2 ? "Carta 1" : "Carta 2"), area1 > area2 ? 1 : 0);
    printf("PIB: %s venceu (%d)\n", (pib1 > pib2 ? "Carta 1" : "Carta 2"), pib1 > pib2 ? 1 : 0);
    printf("Pontos Turísticos: %s venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? "Carta 1" : "Carta 2"), pontosTuristicos1 > pontosTuristicos2 ? 1 : 0);
    printf("Densidade Populacional: %s venceu (%d)\n", (densidade1 < densidade2 ? "Carta 1" : "Carta 2"), densidade1 < densidade2 ? 1 : 0);
    printf("PIB per Capita: %s venceu (%d)\n", (pibpercapita1 > pibpercapita2 ? "Carta 1" : "Carta 2"), pibpercapita1 > pibpercapita2 ? 1 : 0);
    printf("Super Poder: %s venceu (%d)\n", (superpoder1 > superpoder2 ? "Carta 1" : "Carta 2"), superpoder1 > superpoder2 ? 1 : 0);


    return 0;
}
