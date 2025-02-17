#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigoCidade[3];
    char nome[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos; 
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o codigo da carta:\n");
    scanf(" %s", codigoCidade);
    printf("Insira o nome da cidade:\n");
    scanf(" %s", nome);
    printf("Insira a população:\n" );
    scanf(" %i", &populacao);
    printf("Insira a area da cidade:\n");
    scanf("%f", &area);
    printf("Insira o PIB da cidade:\n");
    scanf("%f", &pib);
    printf("Insira a quantidade de pontos turisticos:\n");
    scanf("%i", &pontosTuristicos);
    printf("\n");


    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Codigo: %i\n", codigoCidade);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %i\n", populacao);
    printf("Aréa: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Quantidade de pontos turisticos: %i\n", pontosTuristicos);

    return 0;
}
