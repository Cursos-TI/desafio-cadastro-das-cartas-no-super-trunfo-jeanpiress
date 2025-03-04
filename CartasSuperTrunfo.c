#include <stdio.h>
#include <stdbool.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2, nomeCidade1[20], nomeCidade2[20];
    int pontosTuristicosCidade1, pontosTuristicosCidade2;
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2, densidade1, densidade2, pibPerCapta1, pibPerCapta2, superPoder1, superPoder2;
    unsigned int populacaoCidade1, populacaoCidade2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o estado da primeira carta:\n");
    scanf(" %s", &estado1);
    printf("Insira o nome da primeira cidade:\n");
    scanf(" %s", nomeCidade1);
    printf("Insira a população da primeira cidade:\n" );
    scanf(" %i", &populacaoCidade1);
    printf("Insira a area da primeira cidade:\n");
    scanf("%f", &areaCidade1);
    printf("Insira o PIB da primeira cidade:\n");
    scanf("%f", &pibCidade1);
    printf("Insira a quantidade de pontos turisticos da primeira cidade:\n");
    scanf("%i", &pontosTuristicosCidade1);
    printf("\n");
    
    printf("Insira o estado da segunda carta:\n");
    scanf(" %c", &estado2);
    printf("Insira o nome da segunda cidade:\n");
    scanf(" %s", nomeCidade2);
    printf("Insira a população da segunda cidade:\n" );
    scanf(" %i", &populacaoCidade2);
    printf("Insira a area da segunda cidade:\n");
    scanf("%f", &areaCidade2);
    printf("Insira o PIB da segunda cidade:\n");
    scanf("%f", &pibCidade2);
    printf("Insira a quantidade de pontos turisticos da segunda cidade:\n");
    scanf("%i", &pontosTuristicosCidade2);
    printf("\n");

    pibPerCapta1 = (float)(pibCidade1/populacaoCidade1);
    pibPerCapta2 = (float)(pibCidade2/populacaoCidade2);

    densidade1 = (float)(populacaoCidade1/areaCidade1);
    densidade2 = (float)(populacaoCidade2/areaCidade2);

    superPoder1 = (float)(pontosTuristicosCidade1 + areaCidade1 + (1/densidade1) + pibCidade1 + pibPerCapta1);
    superPoder2 = (float)(pontosTuristicosCidade2 + areaCidade2 + (1/densidade2) + pibCidade2 + pibPerCapta2);
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo da primeira cidade: %c01\n", estado1);
    printf("Nome da cidade : %s\n", nomeCidade1);
    printf("População: %i\n", populacaoCidade1);
    printf("Aréa: %.2f km²\n", areaCidade1);
    printf("PIB: %.2f bilhões de reais\n", pibCidade1);
    printf("Numero de pontos turisticos: %i\n", pontosTuristicosCidade1);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capta: %.2f reais\n", pibPerCapta1);
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo da primeira cidade: %c02\n", estado2);
    printf("Nome da cidade : %s\n", nomeCidade2);
    printf("População: %i\n", populacaoCidade2);
    printf("Aréa: %.2f  km²\n", areaCidade2);
    printf("PIB: %f bilhões de reais\n", pibCidade2);
    printf("Numero de pontos turisticos: %i\n", pontosTuristicosCidade2);
    printf("Densidade Populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capta: %.2f reais\n", pibPerCapta2);

    printf("\n");

    printf("Comparação de Cartas:\n");
    printf("População: (%d)\n", (populacaoCidade1 > populacaoCidade2));
    printf("Área: (%d)\n", (areaCidade1 > areaCidade2));
    printf("PIB: (%d)\n", (pibCidade1 > pibCidade2));
    printf("Pontos Turísticos: (%d)\n", (pontosTuristicosCidade1 > pontosTuristicosCidade2));
    printf("Densidade Populacional: (%d)\n", (densidade1 < densidade2));
    printf("PIB per Capita: (%d)\n", (pibPerCapta1 > pibPerCapta2));
    printf("Super Poder: (%d)\n", (superPoder1 > superPoder2));


    return 0;
}
