#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;

    printf("Vamos inserir os dados da carta 1 \nInforme o estado (A ate H): ");
    scanf("%s", &estado1);

    printf("Informe o codigo (01 ate 04): ");
    scanf("%s", codigo1);

    printf("Informe o nome da cidade: ");
    scanf("%s", cidade1);

    printf("Informe o numero de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a area em quilometros quadrados: ");
    scanf("%f", &area1);

    printf("Informe o Produto Interno Bruto da cidade (PIB): ");
    scanf("%f", &pib1);

    printf("Informe a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turisticos1);


        printf("\nVamos inserir os dados da carta 2\n");

    // Estado
    printf("Informe o estado (A ate H): ");
    scanf(" %c", &estado2);

    // Código
    printf("Informe o codigo (01 ate 04): ");
    scanf("%3s", codigo2);

    // Nome da cidade
    printf("Informe o nome da cidade: ");
    scanf(" %s", cidade2);  // Lê a string até a quebra de linha

    // População
    printf("Informe o numero de habitantes da cidade: ");
    scanf("%d", &populacao2);

    // Área
    printf("Informe a area em quilometros quadrados: ");
    scanf("%f", &area2);

    // PIB
    printf("Informe o Produto Interno Bruto da cidade (PIB): ");
    scanf("%f", &pib2);

    // Pontos turísticos
    printf("Informe a quantidade de pontos turisticos na cidade: ");
    scanf("%d", &turisticos2);

        // Exibir informações
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", turisticos1);

    // Exibir informações
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", turisticos2);

    return(0);
}
