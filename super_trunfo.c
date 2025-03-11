#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Nível Novato


int main() {

    char estado1;
    char codigo1[3];
    char cidade1[20];
    float area1;
    float pib1;
    int pontosTuristicos1;
 
    //coletando dados
    printf("Digite a primeira letra de seu Estado:\n");
    scanf(" %c", &estado1);
    printf("Digite o código de 01 a 04:\n");
    scanf("%2s", &codigo1);
    printf("Digite o nome de sua cidade:\n");
    scanf("%19s", &cidade1);
    printf("Digite a área de sua cidade em km²:\n");
    scanf(" %f", &area1);
    printf("Digite o PIB de sua cidade em bilhões de reais:\n");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos de sua cidade:\n");
    scanf(" %d", &pontosTuristicos1);

    //imprimindo dados
    printf("\nSeu Estado é: %c\n", estado1);
    printf("Seu código é: %c%s\n", estado1, codigo1);
    printf("Sua cidade é: %s\n", cidade1);
    printf("A área da sua cidade é: %.2f km²\n", area1);
    printf("O PIB de sua cidade é: %.2f bilhões de reais\n", pib1);
    printf("O número de pontos turísticos são: %d\n\n", pontosTuristicos1);

    return 0;
}
