#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade1[3], codigoCidade2[3], nomeCidade1[20], nomeCidade2[20];
    int populacaoCidade1, populacaoCidade2, pontosTuristicosCidade1, pontosTuristicosCidade2;
    float areaCidade1, areaCidade2, pibCidade1, pibCidade2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o codigo da primeira carta:\n");
    scanf(" %s", codigoCidade1);
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
    
    printf("Insira o codigo da segunda carta:\n");
    scanf(" %s", codigoCidade2);
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

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo da primeira cidade: %i\n", codigoCidade1);
    printf("Nome da primeira cidade : %s\n", nomeCidade1);
    printf("População da primeira cidade: %i\n", populacaoCidade1);
    printf("Aréa da primeira cidade: %f\n", areaCidade1);
    printf("PIB da primeira cidade: %f\n", pibCidade1);
    printf("Quantidade de pontos turisticos da primeira cidade: %i\n", pontosTuristicosCidade1);
    printf("\n");

    printf("Codigo da segunda cidade: %i\n", codigoCidade2);
    printf("Nome da segunda cidade : %s\n", nomeCidade2);
    printf("População da segunda cidade: %i\n", populacaoCidade2);
    printf("Aréa da segunda cidade: %f\n", areaCidade2);
    printf("PIB da segunda cidade: %f\n", pibCidade2);
    printf("Quantidade de pontos turisticos da segunda cidade: %i\n", pontosTuristicosCidade2);

    return 0;
}
