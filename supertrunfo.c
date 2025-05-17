#include <stdio.h>

int main() {
    
    // Variaveis - Carta 1

    char codigo1[5];                 // Codigo da carta (ex: A01) – ate 4 caracteres
    char estado1;                   // Letra do estado (A ate H)
    char nomeCidade1[50];           // Nome da Cidade
    int populacao1;                 // Populacao
    float area1;                    // Area
    float pib1;                     // Pib (Bilhoes)
    int pontosTuristicos1;          // Quantidade de Pontos Turisticos
    float densidade1;
    float pibPerCapita1;


    // Variaveis da Carta 2

    char codigo2[5];
    char estado2;
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;


    // Entrada dos dados da Carta 1

    printf("Vamos Cadastrar a Carta 1:\n");

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%4s", codigo1);

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a População: ");
    scanf("%d", &populacao1);

    printf("Informe a Area em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    //Calculo para Carta1

    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-


    // Entrada dos dados da Carta 2

    printf("\nVamos Cadastrar a Carta 2:\n");

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%4s", codigo2);

    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao2);

    printf("Informe a Area em km²: ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);


    // Mostrar - Carta 1

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    // Mostrar Carta 2

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
