#include <stdio.h>

//Funcao para extrair o valor de acordo com a escolha do atributo

float extrairValor(int opcao, int pop, float area, float pib, int pts, float densidade, int isDensidadeInvertida) {
    switch(opcao) {
        case 1: return pop;
        case 2: return area;
        case 3: return pib;
        case 4: return pts;
        case 5: return isDensidadeInvertida ? -densidade : densidade; // menor densidade vence
        default: return 0;
    }
}

int main() {
    
    // Variaveis - Carta 1
    char codigo1[5];                // Codigo da carta (ex: A01) – ate 4 caracteres
    char estado1;                   // Estado
    char nomeCidade1[50];           // Nome da Cidade
    int populacao1;                 // Populacao
    float area1;                    // Area
    float pib1;                     // Pib (Bilhoes)
    int pontosTuristicos1;          // Quantidade de Pontos Turisticos
    float densidade1;


    // Variaveis da Carta 2
    char codigo2[5];
    char estado2;
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidade2;

    //Variaveis para controlar o menu e calculo

    int opcao1, opcao2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2, soma1, soma2;

    // Entrada dos dados da Carta 1

    printf("Vamos Cadastrar a Carta 1:\n");

    printf("Digite o Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

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

    printf("Digite o Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

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


    // Menu interativo para escolha do primeiro atributo

    printf("\n===== MENU DE COMPARACAO - ESCOLHA 1º ATRIBUTO =====\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    // Menu interativo para escolha do segundo atributo via switch dinamico
    printf("\n===== MENU DE COMPARACAO - ESCOLHA 2º ATRIBUTO =====\n");
    switch(opcao1) {
        case 1:
            printf("2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
            break;
        case 2:
            printf("1. Populacao\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
            break;
        case 3:
            printf("1. Populacao\n2. Area\n4. Pontos Turisticos\n5. Densidade Demografica\n");
            break;
        case 4:
            printf("1. Populacao\n2. Area\n3. PIB\n5. Densidade Demografica\n");
            break;
        case 5:
            printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n");
            break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("Escolha o segundo atributo: ");
    scanf("%d", &opcao2);

        // Validacao final para garantir que os atributos sejam diferentes
    if (opcao1 == opcao2 || opcao2 < 1 || opcao2 > 5) {
        printf("\nErro: os atributos devem ser diferentes e válidos. Encerrando programa.\n");
        return 1;
    }

    // Extracao dos valores para os atributos escolhidos
    valor1_c1 = extrairValor(opcao1, populacao1, area1, pib1, pontosTuristicos1, densidade1, 1);
    valor1_c2 = extrairValor(opcao1, populacao2, area2, pib2, pontosTuristicos2, densidade2, 1);

    valor2_c1 = extrairValor(opcao2, populacao1, area1, pib1, pontosTuristicos1, densidade1, 1);
    valor2_c2 = extrairValor(opcao2, populacao2, area2, pib2, pontosTuristicos2, densidade2, 1);

    // Soma dos atributos escolhidos
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    // Resultado da comparacao
    printf("\nComparacao entre %s e %s\n", nomeCidade1, nomeCidade2);
    printf("Atributo %d: %.2f vs %.2f\n", opcao1, valor1_c1, valor1_c2);
    printf("Atributo %d: %.2f vs %.2f\n", opcao2, valor2_c1, valor2_c2);
    printf("\nSoma dos atributos: %.2f (Carta 1) vs %.2f (Carta 2)\n", soma1, soma2);

    // Resultado final usando operador ternario
    (soma1 > soma2) ? printf("%s venceu!\n", nomeCidade1) :
    (soma2 > soma1) ? printf("%s venceu!\n", nomeCidade2) :
                      printf("Empate!\n");
    
    return 0;
}
