#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    typedef struct {
        char estado;
        char codigo[4];
        char nomeCidade [50];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
    }CartaSuperTrunfo;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    int main();{
        //Declarar duas cartas
        CartaSuperTrunfo carta1, carta2;
    
        //Entrada de dados para a primeira carta
        printf("Digite os dados da primeira carta:/n");
        printf("estado (A-H:)");
        scanf(" %c", &carta1.estado);
        printf("codigo da Carta (A01):");
        scanf(" %3s", carta1.codigo);
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", carta1.nomeCidade);
        printf("Populacao: ");
        scanf(" %d", &carta1.populacao);
        printf("Area (em km2): ");
        scanf(" %f", &carta1.area);
        printf("PIB (em bilhoes de reais): ");
        scanf(" %f", &carta1.pib);
        printf("Numero de Pontos Turisticos: ");
        scanf(" %d", &carta1.pontosTuristicos);
    
        // Entrada de dados para a segunda carta
        printf("\nDigite os dados da segunda carta:\n");
        printf("Estado (A-H): ");
        scanf(" %c", &carta2.estado);
        printf("Codigo da Carta (ex: A01): ");
        scanf(" %3s", carta2.codigo);
        printf("Nome da Cidade: ");
        scanf(" %[^\n]", carta2.nomeCidade);
        printf("Populacao: ");
        scanf(" %d", &carta2.populacao);
        printf("Area (em km2): ");
        scanf(" %f", &carta2.area);
        printf("PIB (em bilhoes de reais): ");
        scanf(" %f", &carta2.pib);
        printf("Numero de Pontos Turisticos: ");
        scanf(" %d", &carta2.pontosTuristicos);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km2\n", carta1.area);
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontosTuristicos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km2\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontosTuristicos);

    return 0;

    
    }
}    