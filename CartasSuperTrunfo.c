// Desafio Super Trunfo - Países
// Calcular a Densidade Populacional
// Calcular o PIB per capita

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    unsigned long int populacao1, populacao2;
    int pontos1, pontos2;
    float area1, area2, pib1, pib2;
    float densidadepop1, densidadepop2;
    float pibpercapita1, pibpercapita2; 
    float superpoder1, superpoder2;

 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("CARTA 1: \n");
    printf("Digite o Estado, letra de A a H: ");
    scanf(" %c", &estado1);

    printf("Digite o Código, letra do estado + número de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome1);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib1); 

    printf("\nCARTA 2: \n");
    printf("Digite o Estado, letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Digite o Código, letra do estado + número de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome2);

    printf("Digite o número de habitantes: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%f", &pib2);

    // Cálculo da Densidade Populacional

    densidadepop1 = (float) populacao1 / area1;
    densidadepop2 = (float) populacao2 / area2;

    // Cálculo do PIB per capita

    pibpercapita1 = (float) pib1 * 1000000000/ populacao1;
    pibpercapita2 = (float) pib2 * 1000000000/ populacao2;

    // Cálculo do Super Poder
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontos1 + pibpercapita1 + (1/densidadepop1));
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontos2 + pibpercapita2 + (1/densidadepop2));


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n\nCARTA 1\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontos1);
    printf("Densidade Populacional: %.2f habitantes/km² \n", densidadepop1);
    printf("PIB per capita: %.2f reais \n\n", pibpercapita1);
    
    printf("CARTA 2\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);
    printf("Densidade Populacional: %.2f habitantes/km² \n", densidadepop2);
    printf("PIB per capita: %.2f reais \n\n", pibpercapita2);

    // Comparação das Cartas:

    printf("\nComparação das Cartas: \n"); 
    if ((populacao1 > populacao2) == 1) {
        printf("População: Carta 1 venceu (%d) \n", (populacao1 > populacao2));
    } else {
        printf("População: Carta 2 é venceu (%d) \n", (populacao1 > populacao2));
    }
    if ((area1 > area2) == 1) {
        printf("Área: Carta 1 venceu (%d) \n", (area1 > area2));
    } else {
        printf("Área: Carta 2 venceu (%d) \n", (area1 > area2));
    }
    if ((pib1 > pib2) == 1){
        printf("PIB: Carta 1 venceu (%d) \n", (pib1 > pib2));
    } else {
        printf("PIB: Carta 2 venceu (%d) \n", (pib1 > pib2));
    }
    if ((pontos1 > pontos2) == 1) {
        printf("Pontos Turísticos: Carta 1 venceu (%d) \n", (pontos1 > pontos2));
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d) \n", (pontos1 > pontos2));
    }
    if ((pibpercapita1 > pibpercapita2) == 1){
        printf("PIB per capita: Carta 1 venceu (%d) \n", (pibpercapita1 > pibpercapita2));
    } else {
        printf("PIB per capita: Carta 2 venceu (%d) \n", (pibpercapita1 > pibpercapita2));
    }
    if ((densidadepop1 < densidadepop2) == 1) {
        printf("Densidade Populacional: Carta 1 venceu (%d) \n", (densidadepop1 < densidadepop2));
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d) \n", (densidadepop1 < densidadepop2));
    }
    if ((superpoder1 > superpoder2) == 1) {
        printf("Super Poder: Carta 1 venceu (%d) \n", (superpoder1 > superpoder2));
    } else {
        printf("Super Poder: Carta 2 venceu (%d) \n\n", (superpoder1 > superpoder2));
    }

    return 0;
}
