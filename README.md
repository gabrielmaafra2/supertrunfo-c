# supertrunfo_logica

# Funcionalidades

- O usuario pode cadastrar duas cartas com os itens abaixo:
    - Codigo da carta
    - Nome da cidade
    - Populacao (int)
    - Area em km² (float)
    - PIB em bilhoes de reais (float)
    - Quantidade de pontos turisticos (int)
    - Densidade demografica (calculo automatico)

- O usuario pode escolher dois atributos para comparar
    - Populacao
    - Area
    - PIB
    - Pontos turisticos
    - Densidade demografica

- Condicoes

    - O maior valor vence, exceto para densidade demografica onde o menor valor vence
    - O sistema soma os dois valores comparados
    - A carta com a maior soma vence
    - Tratamento correto em caso de empate

- Interface

    - Menu dinamico por switch, removendo a opcao escolhida do segundo menu
    - Validacao de entrada com mensagem de erro quando necessario
    - Resultado organizado para os valores que sao exibidos

#Como compilar

Use o GCC:

```bash
gcc supertrunfo_logica.c -o supertrunfo_logica


#Como executar

./supertrunfo_logica


#Exemplo de uso

Cadastro da Carta 1:
Codigo: C01
Nome da Cidade: Miguel Pereira
Populacao: 9999
Area: 1.00
PIB: 0.0
Numero de Pontos Turisticos: 0

Cadastro da Carta 2:
Codigo: C02
Nome da Cidade: Niteroi
Populacao: 99999
Area: 1.00
PIB: 0.0
Numero de Pontos Turisticos: 0

===== MENU DE COMPARACAO - ESCOLHA 1º ATRIBUTO =====
1. Populacao
2. Area
3. PIB
4. Pontos Turisticos
5. Densidade Demografica
Escolha o primeiro atributo: 1

===== MENU DE COMPARACAO - ESCOLHA 2º ATRIBUTO =====
2. Area
3. PIB
4. Pontos Turisticos
5. Densidade Demografica
Escolha o segundo atributo: 5

Comparacao entre Miguel Pereira e Niteroi
Atributo 1: 9999.00 vs 99999.00
Atributo 5: -9999.00 vs -99999.00

Soma dos atributos: 0.00 (Carta 1) vs -1.00 (Carta 2)
Niteroi venceu!