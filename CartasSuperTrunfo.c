#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Natasha

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, codigo1[5], codigo2[5];
    char nome1[20], nome2[20];
    int populacao1, populacao2, pontos1, pontos2;
    float area1, area2, pib1, pib2;
 
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("CARTA 1: \n");
    printf("Digite o Estado, letra de A a H: ");
    scanf(" %c" , &estado1);

    printf("Digite o Código, número de 01 a 04: ");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome1);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area1);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1); 

    printf("CARTA 2: \n");
    printf("Digite o Estado, letra de A a H: ");
    scanf(" %c", &estado2);

    printf("Digite o Código, número de 01 a 04: ");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", nome2);

    printf("Digite o número de habitantes: ");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area2);

    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\n \n CARTA 1\n");
    printf("Estado: %c \n", estado1);
    printf("Código: %c%s \n", estado1, codigo1);
    printf("Nome da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km² \n", area1);
    printf("PIB: %.2f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d\n\n\n", pontos1);
    
    printf("CARTA 2\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %c%s \n", estado2, codigo2);
    printf("Nome da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontos2);


    return 0;
}
