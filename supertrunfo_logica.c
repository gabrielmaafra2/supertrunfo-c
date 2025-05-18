#include <stdio.h>

int main() {
    
    // Variaveis - Carta 1

    char nomeCidade1[50];           // Nome da Cidade
    int populacao1;                 // Populacao
    float area1;                    // Area
    float pib1;                     // Pib (Bilhoes)
    int pontosTuristicos1;          // Quantidade de Pontos Turisticos
    float densidade1;


    // Variaveis da Carta 2

    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    int opcao;

    // Entrada dos dados da Carta 1

    printf("Vamos Cadastrar a Carta 1:\n");

    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Informe a Populacao: ");
    scanf("%d", &populacao1);

    printf("Informe a Area em km²: ");
    scanf("%f", &area1);

    printf("Informe o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Informe o Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);


    // Entrada dos dados da Carta 2

    printf("\nVamos Cadastrar a Carta 2:\n");

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


    // Menu Interativo

    printf("\n<<<<< Menu de Comparacao >>>>>\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Numero de Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("Escolha o atributo (1 a 5): ");
    scanf("%d", &opcao);

    printf("\nComparacao entre %s e %s:\n", nomeCidade1, nomeCidade2);

        switch(opcao) {
        case 1:
            printf("Populacao: %d vs %d\n", populacao1, populacao2);
            if (populacao1 > populacao2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Area: %.2f km² vs %.2f km²\n", area1, area2);
            if (area1 > area2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("PIB: %.2f vs %.2f\n", pib1, pib2);
            if (pib1 > pib2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (pib2 > pib1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Pontos Turisticos: %d vs %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Densidade Demografica: %.2f vs %.2f\n", densidade1, densidade2);
            if (densidade1 < densidade2) {
                printf("%s venceu!\n", nomeCidade1);
            } else if (densidade2 < densidade1) {
                printf("%s venceu!\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
            break;
    }

    
    return 0;
}
